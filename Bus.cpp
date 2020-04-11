#include "Bus.h"
#include "stdlib.h"

TBus::TBus() : TCarsforWorking()
{
	passenger = 20;
}

int TBus::Getpassenger()
{
	return passenger;
}
void TBus::Setpassenger(int z)
{
	if (z > 10 && z < 40)
		z = passenger;
}