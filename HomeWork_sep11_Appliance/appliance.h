#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance
{
public:
	virtual void turnOn() = 0;
	bool turnOff();
	void setAction(bool &value);
	bool getAction() const;
	~Appliance() {};
private:
	bool action;	
};

#endif
