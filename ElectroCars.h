#ifndef _ElectroCars_h_
#define _ElectroCars_h_
#include "PersonalCars.h"

class ElectroCars : public TPersonalCars
{
protected:
	int Number_electric_motors;
public:
	ElectroCars();
	int GetNumber_electric_motors();
	void SetNumber_electric_motors(int F);
};
#endif
