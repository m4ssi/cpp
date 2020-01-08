#ifndef _H_VANNE_
#define _H_VANNE_

#include "Action.hpp"

class Vanne	: public Action{
	private:
		std::string name;
		bool closed;
	public:	
		Vanne();
		Vanne ( const char * name, bool closed);
		~Vanne ();
	
		void closeVanne();
		void openVanne();
		void action();
		friend std::ostream& operator<< ( std::ostream& os, const Vanne& v);
};

#endif
