#include "TransportVehicle.h"

class Car : TransportVehicle
{
private:
	void Drive();
protected:
	virtual void Move();
public:
	Car();
};