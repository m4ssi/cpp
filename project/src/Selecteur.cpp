#include "Selecteur.hpp"

Selecteur::Selecteur ()	{};

Selecteur::Selecteur ( const char * n_path, int _x, int _y, int h, int w) : normal ( n_path, _x, _y), h(h), w(w), x(_x), y(_y)	{
	this->p = nullptr;
	};

Selecteur::~Selecteur() {};

void Selecteur::setAction ( Pompe * p)	{
	this->p = p;
}

void Selecteur::action( int _x, int _y)	{
	if ( this->x < _x and this->y < _y and (this->x+this->h) > _x and (this->y+this->w) > _y)
			this->p->setBreakDown();
}

void Selecteur::display( SDL_Surface * s, int _x, int _y)	{
	this->normal.display( s);
}
