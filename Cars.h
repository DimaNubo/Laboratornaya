#ifndef _Cars_h_
#define _Cars_h_

class TCars
{
protected:
	int wheels;
public:
	TCars();
	int Getwheels();
	void Setwheels(int N);
};
#endif