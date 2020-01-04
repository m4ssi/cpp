#include <iostream>
#include <cstdlib>
#include "Reservoir.hpp"

Reservoir::Reservoir() : name("no_name")	{
	this->primary = nullptr;
	this->emergency = nullptr;
	this->lvl = 0;
}

Reservoir::Reservoir( const char * name) : name( name)	{
	this->primary = new Pompe ("p11", true, false);
	this->emergency = new Pompe ("p12", false, false);
	this->lvl = 100;
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

void Reservoir::dropLevel()	{
	this->lvl = this->lvl - 5;
}

Pompe * Reservoir::getEmergencyPump()	{
	return this->emergency;
}
