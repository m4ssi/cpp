#ifndef _H_POMPE_
#define _H_POMPE_

class Pompe	{
	private:
		bool stat;
		
	public:
		Pompe ();
		Pompe ( bool stat);
		~Pompe();
		bool getPumpStat();
		void printPumpStat();
	
};


#endif
