#include <cstdlib>
#include <iostream>

#include "Interface.hpp"

/*extern "C" {
	#include <SDL.h>
	#include <SDL_ttf.h>
	#include <SDL/SDL_ttf.h>
}

typedef struct {
	SDL_Surface * image;
	SDL_Rect positionFond;
}image_t;

void pause()	{
	bool stop = false;
	SDL_Event e;
	while ( not stop)	{
		SDL_WaitEvent ( &e);
		switch ( e.type)	{
			case SDL_QUIT:
				stop = true;
				break;
		//	default:
				
		}
	}
}

image_t init_image ( char * path) {
	image_t im;
	im.image = SDL_LoadBMP(path);
	im.positionFond.x = 0;
	im.positionFond.y = 0;
	return im;
}

SDL_Surface * init_fenetre ( void) {
	SDL_Surface * s = NULL;
    SDL_Init(SDL_INIT_VIDEO);
	SDL_WM_SetCaption("Simulation de vol", NULL);
    s = SDL_SetVideoMode( 625, 450, 32, SDL_HWSURFACE);
    if ( s == NULL) {
		fprintf(stdout, "Impossible de charger le mode vidéo : %s\n", SDL_GetError());
		exit(1);
	}
	return s;
}

void display_window ( SDL_Surface * s, image_t image) {
	SDL_FillRect( s, NULL, SDL_MapRGB(s->format, 17, 206, 112));
	SDL_BlitSurface(image.image, NULL, s, &image.positionFond);
	SDL_Flip(s);	
}

int free_surface ( SDL_Event e, image_t * image) {
	if (( e.key.keysym.sym != SDLK_ESCAPE) && ( e.type != SDL_QUIT)) return 1;
	SDL_FreeSurface(image->image); 
	return 0;
}*/

void pause()	{
	bool stop = false;
	SDL_Event e;
	while ( not stop)	{
		SDL_WaitEvent ( &e);
		switch ( e.type)	{
			case SDL_QUIT:
				stop = true;
				break;
		//	default:
				
		}
	}
}

int main (int argc, char * argv[])	{
	/*
    image_t image = init_image ( "./res/button_vt12.bmp");
    SDL_Surface * s = init_fenetre( );
    SDL_FillRect( s, NULL, SDL_MapRGB(s->format, 112, 112, 112));
    SDL_Flip(s);	
    //display_window ( s, image); 
	pause();
	
	//SDL_FreeSurface(image.image);
	SDL_FreeSurface(s);
	SDL_Quit();*/
	Interface i;
	i.display();
	i.getEvent();
	//pause();
	SDL_Quit();
	return 0;
}
