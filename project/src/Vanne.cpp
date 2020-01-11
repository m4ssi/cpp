#include <iostream>
#include <cstdlib>

#include "Vanne.hpp"

Vanne::Vanne() : Action(), name("no_name"), closed(false)	{};
Vanne::Vanne( const char * name, bool closed) : Action(), name( name), closed( closed)	{};
Vanne::~Vanne() {};

void Vanne::closeVanne()	{
	if (not this->closed)
		this->closed = true;
}

void Vanne::openVanne()	{
	if (this->closed)
		this->closed = false;
}

std::ostream& operator<< ( std::ostream& os, const Vanne& v)	{
	os << v.name << "->" << ( v.closed == true ? "Ouverte" : "Fermée");
	return os;
}

void Vanne::action()	{
	this->closed = not this->closed;
}

bool Vanne::getStat()	{
	return this->closed;
}
