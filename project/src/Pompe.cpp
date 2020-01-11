#include <iostream>
#include "Pompe.hpp"

using namespace std;

Pompe::Pompe () : Action(), name("no_name"), stat(false), breakdown(false) {};
Pompe::Pompe ( const char * name, bool stat, bool breakdown) : Action(), name(name), stat(stat), breakdown(breakdown) {};
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
	//cout << "Meeeeeeeeeeeeeeeeeeeerde!!!! " << this->name << endl;
	this->stat = false;
	this->breakdown = true;
}

void Pompe::action()	{
	if ( not this->breakdown)	{
		if ( this->stat)
			this->stat =false;
		else
			this->stat = true;
	}
}

std::string Pompe::getName()	{
	return this->name;
}

std::ostream& operator<< ( std::ostream& os, const Pompe& p)	{
	os << p.name << " " <<(p.stat ? "Ouverte" : "Fermee" ) << " " <<(p.breakdown ? "En Panne" : "Sans Panne" );
	return os;
}
