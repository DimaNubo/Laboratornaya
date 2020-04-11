#ifndef _PetrolCars_h_
#define _PetrolCars_h_
#include "PersonalCars.h"

class PetrolCars : public TPersonalCars
{
protected:
	double engine_volum;
public:
	PetrolCars();
	double Getengine_volum();
	void Setengine_volum(double F);
};
#endif

