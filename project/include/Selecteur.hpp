#ifndef _H_SELECTEUR_
#define _H_SELECTEUR_

#include "Image.hpp"
#include "Pompe.hpp"

class Selecteur	{
	private:
		Image normal;
		int h, w, x, y;
		Pompe * p;
		
	public:
		Selecteur ();
		Selecteur ( const char * n_path, int _x, int _y, int h, int w);
		~Selecteur ();
		
		void setAction ( Pompe * p);
		void action ( int _x = 0,int _y = 0);
		void display(SDL_Surface * s, int _x = 0,int _y = 0);
};

#endif
