#include <iostream>
#include <cstdlib>

#include "Moteur.hpp"

Moteur::Moteur () : name("no_name")	{
	this->feed = nullptr;
	this->routing = nullptr;
}
Moteur::Moteur ( const char * name, Reservoir * feed, Pompe * routing) : name(name)	{
	this->feed = feed;
	this->routing = routing;
}
Moteur::~Moteur()	{
	this->feed = nullptr;
	this->routing = nullptr;
}

Reservoir * Moteur::getFeed()	{
	return this->feed;
}

std::ostream& operator<< ( std::ostream& os, const Moteur& m)	{
	os << m.name << " : Alimenté par  '" << m.feed->getName() << "' via '" << m.routing->getName()<<"'"; 
	return os;
}
