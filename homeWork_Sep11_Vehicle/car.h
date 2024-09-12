#ifndef CAR_H
#define CAR_H
#include "vehicle.h"

class Car: public Vehicle
{
	virtual void move() override;

};

#endif
