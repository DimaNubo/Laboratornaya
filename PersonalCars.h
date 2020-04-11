#ifndef _TPersonalCars_h_
#define _TPersonalCars_h_

#include "Cars.h"
class TPersonalCars : public TCars
{
protected:
	int Number_of_owners;
public:
	TPersonalCars();
	int GetNumber_of_owners();
	void SetNumber_of_owners(int D);
};

#endif

