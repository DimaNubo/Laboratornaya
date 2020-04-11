#include "ElectroCars.h"

ElectroCars::ElectroCars() : TPersonalCars()
{
	Number_electric_motors = 1;
}
int  ElectroCars::GetNumber_electric_motors()
{
	return Number_electric_motors;
}
void ElectroCars::SetNumber_electric_motors(int F)
{
	if (F >= 1 && F < 6)
		F = Number_electric_motors;
}