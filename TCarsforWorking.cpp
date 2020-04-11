#include "CarsforWorking.h"
#include <stdio.h>

TCarsforWorking::TCarsforWorking() : TCars()
{
	Earnings_cars_month = 1;
}
int TCarsforWorking::GetEarnings_cars_month()
{
	return Earnings_cars_month;
}
void TCarsforWorking::SetEarnings_cars_month(int D)
{
	if (Earnings_cars_month != 0)
		D = Earnings_cars_month;
}