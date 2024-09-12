#ifndef MICROWAVE_H
#define MICROWAVE_H
#include "appliance.h"

class Microwave : public Appliance
{
public:
	void turnOn() override;
};

#endif
