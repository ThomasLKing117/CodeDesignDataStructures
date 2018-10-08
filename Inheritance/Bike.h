#include "TransportVehicle.h"

class Bike : TransportVehicle
{
private:
	void Pedal();
protected:
	virtual void Move();
public:
	Bike();
};