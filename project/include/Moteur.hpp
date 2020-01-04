#ifndef _H_MOTEUR_
#define _H_MOTEUR_

#include "Reservoir.hpp"
#include "Pompe.hpp"

class Moteur	{
	private:
		std::string name;
		Reservoir * feed;
		Pompe * routing;
		
	public:
		Moteur ();
		Moteur ( const char * name, Reservoir * feed, Pompe * routing);
		~Moteur();
		
		Reservoir * getFeed();
};


#endif
