#include "DashBoard.hpp"
#include "Bouton.hpp"

DashBoard::DashBoard()	{
	
	this->a = nullptr;
	tank[0] = new Bouton ( "./res/button_tank1.bmp", "./res/button_hoven_tank1.bmp", 50, 250, 125, 50);
	tank[1] = new Bouton ( "./res/button_tank2.bmp", "./res/button_hoven_tank2.bmp", 250, 250, 125, 50);
	tank[2] = new Bouton( "./res/button_tank1.bmp", "./res/button_hoven_tank1.bmp", 450, 250, 125, 50);
	
	v[0] = new Bouton ( "./res/button_v12.bmp", "./res/button_hoven_v12.bmp", 50, 150, 125, 50);
	v[1] = new Bouton ( "./res/button_v13.bmp", "./res/button_hoven_v13.bmp", 250, 150, 125, 50);
	v[2] = new Bouton( "./res/button_v23.bmp", "./res/button_hoven_v23.bmp", 450, 150, 125, 50);

	vt[0] = new Bouton ( "./res/button_vt12.bmp", "./res/button_hoven_vt12.bmp", 150, 50, 125, 50);
	vt[1] = new Bouton ( "./res/button_vt23.bmp", "./res/button_hoven_vt23.bmp", 350, 50, 125, 50);

	p[0] = new Bouton ( "./res/button_p11.bmp", "./res/button_hoven_p11.bmp", 50, 350, 50, 50);
	p[1] = new Bouton ( "./res/button_p12.bmp", "./res/button_hoven_p12.bmp", 125, 350, 50, 50);
	p[2] = new Bouton ( "./res/button_p11.bmp", "./res/button_hoven_p11.bmp", 250, 350, 50, 50);
	p[3] = new Bouton ( "./res/button_p12.bmp", "./res/button_hoven_p12.bmp", 325, 350, 50, 50);
	p[4] = new Bouton ( "./res/button_p11.bmp", "./res/button_hoven_p11.bmp", 450, 350, 50, 50);
	p[5] = new Bouton ( "./res/button_p12.bmp", "./res/button_hoven_p12.bmp", 525, 350, 50, 50);
	

	p_b[0] = new Selecteur ( "./res/button_breakdow_p11.bmp", 50, 450, 50, 50);
	p_b[1] = new Selecteur ( "./res/button_breakdow_p12.bmp", 125, 450, 50, 50);
	p_b[2] = new Selecteur ( "./res/button_breakdow_p11.bmp", 250, 450, 50, 50);
	p_b[3] = new Selecteur ( "./res/button_breakdow_p12.bmp", 325, 450, 50, 50);
	p_b[4] = new Selecteur ( "./res/button_breakdow_p11.bmp", 450, 450, 50, 50);
	p_b[5] = new Selecteur ( "./res/button_breakdow_p12.bmp", 525, 450, 50, 50);	
};


DashBoard::~DashBoard()	{
	for (int i = 0; i < 3; i++)	{
		delete this->tank[i];
		delete this->v[i];
	}
	for (int i = 0; i < 2; i++)
		delete this->vt[i];
	for (int i = 0; i < 6; i++)	{
		delete this->p[i];
	}
	
}

void DashBoard::setAvion ( Avion * a)	{
	this->a = a;
	for (int i = 0; i < 3; i++)	{
		this->tank[i]->setAction ( a->getTank(i));
		this->v[i]->setAction ( a->getVanneV(i));
	}
	for (int i = 0; i < 2; i++)
		this->vt[i]->setAction ( a->getVanneVT(i));
	for (int i = 0; i < 3; i++)	{
		this->p[(i+1)*2 - 2]->setAction( a->getTank(i)->getPrimaryPump());
		this->p_b[(i+1)*2 - 2]->setAction( a->getTank(i)->getPrimaryPump());
		this->p[(i+1)*2 - 1]->setAction( a->getTank(i)->getEmergencyPump());
		this->p_b[(i+1)*2 - 1]->setAction( a->getTank(i)->getEmergencyPump());
	}
		
	
	
}

void DashBoard::action( int _x, int _y)	{
	for (int i = 0; i < 3; i++)	{
		this->tank[i]->action( _x, _y);
		this->v[i]->action( _x, _y);
	}
	for (int i = 0; i < 2; i++)	{
		this->vt[i]->action ( _x, _y);
	}
	for (int i = 0; i < 6; i++)	{
		this->p[i]->action( _x, _y);
		this->p_b[i]->action( _x, _y);
	}
	this->a->action();
}

void DashBoard::display( SDL_Surface * s, int _x, int _y)	{
	for (int i = 0; i < 3; i++)	{
		this->tank[i]->display( s, _x, _y);
		this->v[i]->display( s, _x, _y);
	}
	for (int i = 0; i < 2; i++)	{
		this->vt[i]->display( s, _x, _y);
	}
	for (int i = 0; i < 6; i++)	{
		this->p[i]->display( s, _x, _y);
		this->p_b[i]->display( s, _x, _y);
	}
	
}
