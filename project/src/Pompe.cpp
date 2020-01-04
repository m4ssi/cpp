#include <iostream>
#include "Pompe.hpp"

using namespace std;

Pompe::Pompe () : name("no_name"), stat(false), breakdown(false) {};
Pompe::Pompe ( const char * name, bool stat, bool breakdown) : name(name), stat(stat), breakdown(breakdown) {};
Pompe::~Pompe() {};

bool Pompe::getPumpStat()	{
	return this->stat;
}

bool Pompe::getPumpBreakdown()	{
	return this->breakdown;
}

void Pompe::printPumpStat()	{
	cout << this->name << " " <<(this->stat ? "Ouverte" : "Fermee" ) << " " 
		 <<(this->breakdown ? "En Panne" : "Sans Panne" ) << endl;
}

void Pompe::setBreakDown()	{
	this->stat = false;
	this->breakdown = true;
}
