#ifndef _H_INTERFACE_
#define _H_INTERFACE_



#include "DashBoard.hpp"
#include "Avion.hpp"


class Interface	{
	private:
		SDL_Surface * s;
		DashBoard d;
		Avion * a;
		
	public:
		Interface();
		~Interface();
		void getEvent();
		void display( int _x = 0,int _y = 0);
};

#endif
