#ifndef _H_POMPE_
#define _H_POMPE_

#include "Action.hpp"

class Pompe	: public Action{
	private:
		std::string name;
		bool stat;
		bool breakdown;
		
	public:
		Pompe ();
		Pompe ( const char * name, bool stat, bool breakdown);
		~Pompe();
		bool getPumpStat();
		bool getPumpBreakdown();
		void printPumpStat();
		void setBreakDown();
		void action();
		std::string getName();
		friend std::ostream& operator<< ( std::ostream& os, const Pompe& p);
};


#endif
