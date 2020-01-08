#include "DashBoard.hpp"
#include "Bouton.hpp"

DashBoard::DashBoard()	{
	
	tank[0] = new Bouton ( "./res/button_tank1.bmp", "./res/button_hoven_tank1.bmp", 50, 250, 125, 50);
	tank[1] = new Bouton ( "./res/button_tank2.bmp", "./res/button_hoven_tank2.bmp", 250, 250, 125, 50);
	tank[2] = new Bouton( "./res/button_tank1.bmp", "./res/button_hoven_tank1.bmp", 450, 250, 125, 50);
	
	v[0] = new Bouton ( "./res/button_v12.bmp", "./res/button_hoven_v12.bmp", 50, 150, 125, 50);
	v[1] = new Bouton ( "./res/button_v13.bmp", "./res/button_hoven_v13.bmp", 250, 150, 125, 50);
	v[2] = new Bouton( "./res/button_v23.bmp", "./res/button_hoven_v23.bmp", 450, 150, 125, 50);

	vt[0] = new Bouton ( "./res/button_vt12.bmp", "./res/button_hoven_vt12.bmp", 150, 50, 125, 50);
	vt[1] = new Bouton ( "./res/button_vt23.bmp", "./res/button_hoven_vt23.bmp", 350, 50, 125, 50);
};

DashBoard::~DashBoard()	{
	for (int i = 0; i < 3; i++)	{
		delete this->tank[i];
		delete this->v[i];
	}
	for (int i = 0; i < 2; i++)
		delete this->vt[i];
}

void DashBoard::display( SDL_Surface * s, int _x, int _y)	{
	for (int i = 0; i < 3; i++)	{
		this->tank[i]->display( s, _x, _y);
		this->v[i]->display( s, _x, _y);
	}
	for (int i = 0; i < 2; i++)	{
		this->vt[i]->display( s, _x, _y);
	}
}
