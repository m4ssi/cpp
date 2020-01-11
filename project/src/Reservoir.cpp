#include <iostream>
#include <cstdlib>
#include "Reservoir.hpp"

Reservoir::Reservoir() : Action(), name("no_name")	{
	this->primary = nullptr;
	this->emergency = nullptr;
	this->lvl = 0;
}

Reservoir::Reservoir( const char * name, int capacity) :  Action(), name( name)	{
	this->primary = new Pompe ("p11", true, false);
	this->emergency = new Pompe ("p12", false, false);
	this->lvl = capacity;
}

Reservoir::~Reservoir()	{
	if ( this->primary != nullptr) delete this->primary;
	if ( this->emergency != nullptr) delete this->emergency;
}

Pompe * Reservoir::getPrimaryPump()	{
	return this->primary;
}

int Reservoir::getLevel()	{
	return this->lvl;
}

void Reservoir::setLevel( int _lvl)	{
	this->lvl = _lvl;
}

void Reservoir::dropLevel()	{
	this->lvl = this->lvl - 5;
}

void Reservoir::action()	{
	this->lvl = 0;
}

Pompe * Reservoir::getEmergencyPump()	{
	return this->emergency;
}

std::string Reservoir::getName()	{
	return this->name;
}

std::ostream& operator<< ( std::ostream& os, const Reservoir& r)	{
	os << r.name << " : Niveau -> " << r.lvl << std::endl << "--" << *r.primary << std::endl << "--" << *r.emergency;
	return os;
}
