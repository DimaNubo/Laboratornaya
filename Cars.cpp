#include "Cars.h"
#include <iostream>

TCars::TCars()
{
	wheels = 4;
}
int TCars::Getwheels()
{
	return wheels;
}
void TCars::Setwheels(int N)
{
	if (N > 3 && N < 20)
		wheels = N;
}