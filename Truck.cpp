#include "Truck.h"
#include <stdio.h>

Truck::Truck() : TCarsforWorking()
{
	stuff = 1;
}
int Truck::Getstuff()
{
	return stuff;
}
void Truck::Setstuff(int D)
{
	if (D > 0)
		D = stuff;
}