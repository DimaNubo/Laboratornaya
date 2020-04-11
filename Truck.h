#ifndef _Truck_h_
#define _Truck_h_

#include "CarsforWorking.h"
class Truck : public TCarsforWorking
{
protected:
	int stuff;
public:
	Truck();
	int Getstuff();
	void Setstuff(int D);
};

#endif