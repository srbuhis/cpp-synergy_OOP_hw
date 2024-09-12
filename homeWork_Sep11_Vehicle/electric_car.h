#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H
#include "car.h"

class ElectricCar: public Car
{
public:
	void move() override;

};

#endif
