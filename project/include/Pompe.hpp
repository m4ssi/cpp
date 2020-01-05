#ifndef _H_POMPE_
#define _H_POMPE_

class Pompe	{
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
		std::string getName();
		friend std::ostream& operator<< ( std::ostream& os, const Pompe& p);
};


#endif
