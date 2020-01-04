#include <iostream>
#include <cstdlib>
#include "Avion.hpp"

/*Avion::Avion()	{
	Reservoir tank1 ( "Tank1"), tank2 ( "Tank2"), tank3 ( "Tank3");
	
	Vanne	v12 ( "V12", false),
			v13 ( "V13", false),
			v23 ( "V23", false);
	Vanne	vt12 ( "VT12", false),
			vt23 ( "VT23", false);
	
	this->tank[0] = tank1;
	this->tank[1] = tank2;
	this->tank[2] = tank3;
	
	std::cout << tank1.get
	
	Moteur	m1 ( "M1", &this->tank[0], this->tank[0].getPrimaryPump()),
			m2 ( "M2", &this->tank[1], this->tank[1].getPrimaryPump()),
			m3 ( "3", &this->tank[2], this->tank[2].getPrimaryPump());
	
	this->m[0] = m1;
	this->m[1] = m2;
	this->m[2] = m3;
	
	this->v[0] = v12;
	this->v[1] = v13;
	this->v[2] = v23;

	this->vt[0] = vt12;
	this->vt[1] = vt23;

}*/

Avion::Avion()	{
	

	
	this->tank[0] = new Reservoir ( "Tank1");
	this->tank[1] = new Reservoir ( "Tank2");
	this->tank[2] = new Reservoir ( "Tank3");
	
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
	if ( num > -1 and num < 3)
		return this->tank[num];
//	return 0;
}

Moteur * Avion::getMoteur ( int num)	{
	if ( num > -1 and num < 3)
		return this->m[num];
//	return 0;
}

Vanne * Avion::getVanneV ( int num)	{
	if ( num > -1 and num < 3)
		return this->v[num];
//	return 0;
}

Vanne * Avion::getVanneVT ( int num)	{
	if ( num > -1 and num < 2)
		return this->v[num];
//	return 0;
}

void Avion::printStat()	{
	std::cout	<< "Statistiques de l'avion : " 
				<< "\n\tTank1 : " << "Niveau -> " << this->getTank(0)->getLevel() << "\n\t\t";
				this->getTank(0)->getPrimaryPump()->printPumpStat(); std::cout << "\t\t";
				this->getTank(0)->getEmergencyPump()->printPumpStat();

}

void Avion::simulation()	{
	this->printStat();
}

/*void Avion::fuel_level ()	{
	while ( this->getTank(0).getLevel() > 0 and this->getTank(1).getLevel() > 0 and this->getTank(2).getLevel() > 0)	{
		for (int i = 0; i < 3; i++)	{
			this->getMoteur(i).getFeed()->dropLevel();
		}
	}
}*/
