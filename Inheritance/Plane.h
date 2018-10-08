#include "TransportVehicle.h"

class Plane :TransportVehicle
{
private:
	void Fly();
protected:
	virtual void Move();
public:
	Plane();
};