#include "PersonalCars.h"
#include <stdio.h>

TPersonalCars::TPersonalCars() : TCars()
{
	Number_of_owners = 1;
}
int TPersonalCars::GetNumber_of_owners()
{
	return Number_of_owners;
}
void TPersonalCars::SetNumber_of_owners(int D)
{
	if (Number_of_owners != 0)
		D = Number_of_owners;
}