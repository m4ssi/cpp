#ifndef _H_BOUTON_
#define _H_BOUTON_

#include "Image.hpp"
#include "Action.hpp"

class Bouton	{
	private:
		Image normal;
		Image hoven;
		int h, w, x, y;
		Action * a;
		
	public:
		Bouton ();
		Bouton ( const char * n_path, const char * h_path, int _x, int _y, int h, int w);
		~Bouton ();
		
		void setAction ( Action * a);
		void action ( int _x = 0,int _y = 0);
		void display(SDL_Surface * s, int _x = 0,int _y = 0);
};

#endif
