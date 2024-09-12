#ifndef CAR_H
#define CAR_H
#include "vehicle.h"

class Car: public Vehicle
{
public:
	virtual void move() override;

};

#endif
