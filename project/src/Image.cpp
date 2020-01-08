#include <iostream>
#include "Image.hpp"

Image::Image()	{
	this->image = NULL;
	this->positionFond.x = 0;
	this->positionFond.y = 0;
}
Image::Image( const char * file, int x, int y)	{
	this->image = SDL_LoadBMP(file);
	this->positionFond.x = x;
	this->positionFond.y = y;
}

Image::~Image()	{
	SDL_FreeSurface(this->image);
}

void Image::display ( SDL_Surface * s)	{
//	std::cout << this->positionFond.x << " " << this->positionFond.y << std::endl;
	SDL_BlitSurface( this->image, NULL, s, &this->positionFond);
}
