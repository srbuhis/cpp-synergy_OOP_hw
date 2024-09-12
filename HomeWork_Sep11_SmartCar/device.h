#ifndef DEVICE_H
#define DEVICE_H

class Device
{
public:
	virtual void start() = 0;
	virtual ~Device();
};

#endif
