#include <iostream>

#include <thread>
#include "Avion.hpp"

using namespace std;

/*void fuel_level ( Avion & a)	{
	while ( a.getTank(0).getLevel() > 0 and a.getTank(1).getLevel() > 0 and a.getTank(2).getLevel() > 0)	{
		for (int i = 0; i < 3; i++)	{
			a.getMoteur(i).getFeed()->dropLevel();
		}
	}
}*/

int main (int argc, char ** argv)	{
	
	
	Avion a;
	a.simulation();
	return EXIT_SUCCESS;
}
