#ifndef _H_RESERVOIR_
#define _H_RESERVOIR_

#include "Pompe.hpp"

class Reservoir	{
	private:
		std::string name;
		Pompe * primary;
		Pompe * emergency;
		
	public:
		Reservoir();
		Reservoir( char * name, Pompe * primary, Pompe * emergency);
		~Reservoir();
};

#endif
