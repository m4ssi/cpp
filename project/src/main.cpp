#include <cstdlib>
#include <iostream>

#include "Interface.hpp"

int main (int argc, char * argv[])	{
	
	Interface i;
	i.display();
	i.getEvent();
	SDL_Quit();
	return 0;
}
