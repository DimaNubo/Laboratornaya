#ifndef _Bus_h_
#define _Bus_h_

#include "CarsforWorking.h"

class TBus : public TCarsforWorking
{
protected:
	int passenger;
public:
	TBus();
	int Getpassenger();
	void Setpassenger(int z);
};


#endif
