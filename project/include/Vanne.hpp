#ifndef _H_VANNE_
#define _H_VANNE_

class Vanne	{
	private:
		std::string name;
		bool closed;
	public:	
		Vanne();
		Vanne ( const char * name, bool closed);
		~Vanne ();
	
		void closeVanne();
		void openVanne();
};

#endif
