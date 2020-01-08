#ifndef _H_DASHBOARD_
#define _H_DASHBOARD_


#include "Bouton.hpp"
#include "Avion.hpp"

class DashBoard	{
	private:
		Bouton * vt[2];
		Bouton * v[3];
		Bouton * tank[3];
		Avion * a;
		
	public:
		DashBoard ();
		~DashBoard();
		
		
		void setAvion ( Avion * a);
		void action ( int _x = 0,int _y = 0);
		void display ( SDL_Surface * s, int _x = 0,int _y = 0);
};

#endif
