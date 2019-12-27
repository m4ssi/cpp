#include <iostream>
#include "Pompe.hpp"

using namespace std;

Pompe::Pompe () : stat(false) {};
Pompe::Pompe ( bool stat) : stat(stat) {};
Pompe::~Pompe() {};

bool Pompe::getPumpStat()	{
	return this->stat;
}
void Pompe::printPumpStat()	{
	cout << (this->stat ? "Ouverte" : "Fermee" ) << endl;
}
