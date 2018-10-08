#include <iostream>

class TransportVehicle
{
protected:
	int speed;
	int fuel;
	virtual void Move() = 0;
public:
	int wheels;
};