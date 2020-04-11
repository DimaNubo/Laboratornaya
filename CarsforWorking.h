#ifndef _TCarsforWorking_h_
#define _TCarsforWorking_h_

#include "Cars.h"
class TCarsforWorking : public TCars
{
protected:
	int Earnings_cars_month;
public:
	TCarsforWorking();
	int GetEarnings_cars_month();
	void SetEarnings_cars_month(int D);
};

#endif
