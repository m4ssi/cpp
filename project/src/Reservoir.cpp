#include <iostream>
#include <cstdlib>
#include "Reservoir.hpp"

Reservoir::Reservoir() : name("no_name")	{
	this->primary = nullptr;
	this->emergency = nullptr;
}

Reservoir::Reservoir( char * name, Pompe * primary, Pompe * emergency) : name( name)	{
	this->primary = primary;
	this->emergency = emergency;
}

Reservoir::~Reservoir()	{
	this->primary = nullptr;
	this->emergency = nullptr;
}
