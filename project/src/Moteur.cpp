#include <iostream>
#include <cstdlib>

#include "Moteur.hpp"

Moteur::Moteur () : name("no_name")	{
	this->feed = nullptr;
	this->routing = nullptr;
}
Moteur::Moteur ( char * name, Reservoir * feed, Pompe * routing) : name(name)	{
	this->feed = feed;
	this->routing = routing;
}
Moteur::~Moteur()	{
	this->feed = nullptr;
	this->routing = nullptr;
}
