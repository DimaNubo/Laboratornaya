#include <iostream>
using namespace std;

#include "Cars.h"
#include "CarsforWorking.h"
#include "PetrolCars.h"
#include "Truck.h"
#include "Bus.h"
#include "ElectroCars.h"
#include "PersonalCars.h"

void main()
{
	TCars A1;
	A1.Setwheels(6);
	cout << "wheels =" << A1.Getwheels() << endl;

	TCarsforWorking A2;
	A2.SetEarnings_cars_month(600000);
	cout << "Earnings_cars_month =" << A2.GetEarnings_cars_month() << endl;

	TPersonalCars A3;
	A3.SetNumber_of_owners(1);
	cout << "Number_of_owners =" << A3.GetNumber_of_owners() << endl;

	Truck A4;
	A4.Setstuff(1);
	cout << "stuff A4 =" << A4.Getstuff() << endl;

	TBus A5;
	A5.Setpassenger(30);
	cout << "passenger =" << A5.Getpassenger() << endl;

	ElectroCars A6;
	A6.SetNumber_electric_motors(4);
	cout << "number_electric_motors =" << A6.GetNumber_electric_motors() << endl;

	PetrolCars A7;
	A7.Setengine_volum(5.5);
	cout << "engine_volum =" << A7.Getengine_volum() << endl;
}