#ifndef SMARTCAR_H
#define SMARTCAR_H

class SmartCar : public Device, public IMovable, public IConnectable
{
public:
	void start() override;
	void move(int x, int y) override;
	void stop() override;
	void connect() override;
	void disconnect() override;
	
};

#endif
