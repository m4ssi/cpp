#ifndef _H_AVION_
#define _H_AVION_


#include "Reservoir.hpp"
#include "Pompe.hpp"
#include "Moteur.hpp"
#include "Vanne.hpp"

class Avion	{
	private:
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
		void printStat();
		void simulation();
//		void fuel_level ();
};


#endif
