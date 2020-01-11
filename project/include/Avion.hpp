#ifndef _H_AVION_
#define _H_AVION_

#include <iostream>

#include "Reservoir.hpp"
#include "Pompe.hpp"
#include "Moteur.hpp"
#include "Vanne.hpp"

class Avion	{
	protected:
		Reservoir * tank[3];
		Moteur * m[3];
		Vanne * v[3];
		Vanne * vt[2];

	
	public:
		Avion ();
		//Avion ( char * pathname);
		~Avion();
		Reservoir * getTank ( int num);
		Moteur * getMoteur ( int num);
		Vanne * getVanneV ( int num);
		Vanne * getVanneVT ( int num);
		friend std::ostream& operator<< ( std::ostream& os, const Avion& a);
		void action ();
		void decision ( std::string s);
		void simulation();
//		void fuel_level ();
};


#endif
