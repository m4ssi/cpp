#include <iostream>
#include <cstdlib>
#include "Reservoir.hpp"

Reservoir::Reservoir() : name("no_name")	{
	this->primary = NULL;
	this->emergency = NULL;
}

Reservoir::Reservoir( char * name, Pompe * primary, Pompe * emergency) : name( name)	{
	this->primary = primary;
	this->emergency = emergency;
}
