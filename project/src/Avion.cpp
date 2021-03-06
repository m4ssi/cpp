#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include "Avion.hpp"

Avion::Avion()	{
	

	
	this->tank[0] = new Reservoir ( "Tank1", 100);
	this->tank[1] = new Reservoir ( "Tank2", 70);
	this->tank[2] = new Reservoir ( "Tank3", 100);
	
	this->m[0] = new Moteur ( "M1", this->tank[0], this->tank[0]->getPrimaryPump());
	this->m[1] = new Moteur ( "M2", this->tank[1], this->tank[1]->getPrimaryPump());
	this->m[2] = new Moteur ( "M3", this->tank[2], this->tank[2]->getPrimaryPump());
	
	this->v[0] = new Vanne ( "V12", false);
	this->v[1] = new Vanne ( "V13", false);
	this->v[2] = new Vanne ( "V23", false);

	this->vt[0] = new Vanne ( "VT12", false);
	this->vt[1] = new Vanne ( "VT23", false);

}

Avion::~Avion() {
	for (int i = 0; i < 3; i++)	{
		delete this->tank[i];
		delete this->m[i];
		delete this->v[i];
	}
	for (int i = 0; i < 2; i++)
		delete this->vt[i];
	
};

Reservoir * Avion::getTank ( int num)	{
	return this->tank[num];
//	return 0;
}

Moteur * Avion::getMoteur ( int num)	{
	return this->m[num];
//	return 0;
}

Vanne * Avion::getVanneV ( int num)	{
	return this->v[num];
//	return 0;
}

Vanne * Avion::getVanneVT ( int num)	{
	return this->vt[num];
//	return 0;
}

std::ostream& operator<<( std::ostream& os, const Avion& a)	{
	os << "Statistique de l'avion : "<< std::endl;
	for (int i = 0; i < 3; i++)	{
		os << *a.tank[i] << std::endl;
	}
	os << std::endl;
	for (int i = 0; i < 3; i++)	{
		os << *a.m[i] << std::endl;
	}
	os << std::endl;
	for (int i = 0; i < 3; i++)	{
		os << *a.v[i] << std::endl;
	}
	os << std::endl;
	for (int i = 0; i < 2; i++)	{
		os << *a.vt[i] << std::endl;
	}
	return os;
}



void Avion::action ()	{
	if ( this->vt[0]->getStat() and this->vt[1]->getStat())	{
		int _lvl = (this->tank[0]->getLevel() + this->tank[1]->getLevel() + this->tank[2]->getLevel() )/3;
		for (int i = 0; i < 3; i++)
			this->tank[i]->setLevel( _lvl);
	}
	else if ( this->vt[0]->getStat() and not this->vt[1]->getStat())	{
		int _lvl = (this->tank[0]->getLevel() + this->tank[1]->getLevel())/2;
		for (int i = 0; i < 2; i++)
			this->tank[i]->setLevel( _lvl);		
	}
	else if ( not this->vt[0]->getStat() and this->vt[1]->getStat())	{
		int _lvl = (this->tank[1]->getLevel() + this->tank[2]->getLevel() )/2;
		for (int i = 1; i < 3; i++)
			this->tank[i]->setLevel( _lvl);		
	}
}

void Avion::simulation()	{
	while (this->tank[0]->getLevel() + this->tank[1]->getLevel() + this->tank[2]->getLevel() > 0)	{
		std::string s;
		std::cout << "\033[H\033[2J" << *this << std::endl;
		for (int i = 0; i < 3; i++)	{
			this->tank[i]->dropLevel();
		}
		std::cout << "Veuillez saisir un ordre : " ;
		getline (std::cin, s);
//		this->decision(s);
		sleep(1);
	}
}

/*void Avion::fuel_level ()	{
	while ( this->getTank(0).getLevel() > 0 and this->getTank(1).getLevel() > 0 and this->getTank(2).getLevel() > 0)	{
		for (int i = 0; i < 3; i++)	{
			this->getMoteur(i).getFeed()->dropLevel();
		}
	}
}*/
