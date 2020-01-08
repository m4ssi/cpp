#include "Interface.hpp"

Interface::Interface() {

    SDL_Init(SDL_INIT_VIDEO);
	SDL_WM_SetCaption("Simulation de vol", NULL);
    this->s = SDL_SetVideoMode( 625, 450, 32, SDL_HWSURFACE);
    if ( s == NULL) {
		fprintf(stdout, "Impossible de charger le mode vidéo : %s\n", SDL_GetError());
		exit(1);
	}	
}

Interface::~Interface()	{};

void Interface::getEvent()	{
	SDL_Event e;
	bool stop = false;
	int x = 0, y = 0;
	while ( not stop) 	{
		SDL_WaitEvent ( &e);

		switch ( e.type)	{
			case SDL_QUIT:
				stop = true;
				break;
			case SDL_MOUSEMOTION:
				x = e.motion.x;
				y = e.motion.y;
				this->display( x, y);
				break;
		}
	}
}

void Interface::display( int _x,int _y)	{
	SDL_FillRect( this->s, NULL, SDL_MapRGB( this->s->format, 112, 112, 112));
	this->d.display( this->s, _x, _y);	
	SDL_Flip( this->s);
}
