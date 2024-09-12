#ifndef CAR_H
#define CAR_H
#include "imovable.h"

class Car : public IMovable
{
	void move(int q, int z) override;
	void stop() override;

};

#endif
