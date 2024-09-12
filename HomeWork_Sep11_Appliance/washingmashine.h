#ifndef WASHINGMACHINE_H
#define WASHINGMACHINE_H
#include "appliance.h"

class WashingMachine : public Appliance
{
public:
	void turnOn() override;
};

#endif
