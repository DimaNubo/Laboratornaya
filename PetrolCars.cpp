#include "PetrolCars.h"

PetrolCars::PetrolCars() : TPersonalCars()
{
	engine_volum = 1.5;
}
double  PetrolCars::Getengine_volum()
{
	return engine_volum;
}
void PetrolCars::Setengine_volum(double F)
{
	if (F >= 1 && F < 10)
		F = engine_volum;
}