#include "Bouton.hpp"

Bouton::Bouton ()	{};
//Bouton::Bouton () : normal ( n_path, x, y), hover( h_path, x, y), h(h), w(w)	{};
Bouton::Bouton ( const char * n_path, const char * h_path, int _x, int _y, int h, int w) : normal ( n_path, _x, _y), hoven( h_path, _x, _y), h(h), w(w), x(_x), y(_y)	{};

Bouton::~Bouton() {};

void Bouton::display( SDL_Surface * s, int _x, int _y)	{
	if ( this->x < _x and this->y < _y and (this->x+this->h) > _x and (this->y+this->w) > _y)
			this->hoven.display(s);
	else	this->normal.display( s);
}
