#ifndef _H_DASHBOARD_
#define _H_DASHBOARD_


#include "Bouton.hpp"

class DashBoard	{
	private:
		Bouton * vt[2];
		Bouton * v[3];
		Bouton * tank[3];
		
	public:
		DashBoard();
		~DashBoard();
		
		void display( SDL_Surface * s, int _x = 0,int _y = 0);
};

#endif
