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
		Reservoir( const char * name, int capacity);
		~Reservoir();
		
		Pompe * getPrimaryPump();
		Pompe * getEmergencyPump();
		int getLevel ();
		void dropLevel();
		void setToZero();
		std::string getName();
		friend std::ostream& operator<< ( std::ostream& os, const Reservoir& r);
};

#endif
