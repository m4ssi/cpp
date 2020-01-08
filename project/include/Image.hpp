#ifndef _H_IMAGE_
#define _H_IMAGE_

extern "C" {
	#include <SDL.h>
	#include <SDL_ttf.h>
	#include <SDL/SDL_ttf.h>
}

class Image {
	private:
		SDL_Surface * image;
		SDL_Rect positionFond;
		
	public:
		Image();
		Image( const char * file, int x, int y);
		~Image();
		void display ( SDL_Surface * s);

};

#endif
