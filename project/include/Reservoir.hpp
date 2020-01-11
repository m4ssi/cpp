#ifndef _H_RESERVOIR_
#define _H_RESERVOIR_

#include "Action.hpp"
//#include "Avion.hpp"
#include "Pompe.hpp"

class Reservoir	: public Action	{
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
		void setLevel (int _lvl);
		void dropLevel();
		void action();
		std::string getName();
		friend std::ostream& operator<< ( std::ostream& os, const Reservoir& r);
};

#endif
