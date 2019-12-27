#include <iostream>
#include "Pompe.hpp"

using namespace std;

int main (int argc, char ** argv)	{
	
	
	Pompe p;
	p.printPumpStat();
	cout << p.getPumpStat() << endl;
	return EXIT_SUCCESS;
}
