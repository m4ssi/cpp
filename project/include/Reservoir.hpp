#ifndef _H_RESERVOIR_
#define _H_RESERVOIR_

#include "Pompe.hpp"

class Reservoir	{
	private:
		std::string name;
		int lvl;
		Pompe * primary;
		Pompe * emergency;
		
	public:
		Reservoir();
		Reservoir( const char * name);
		~Reservoir();
		
		Pompe * getPrimaryPump();
		Pompe * getEmergencyPump();
		int getLevel ();
		void dropLevel();
};

#endif
