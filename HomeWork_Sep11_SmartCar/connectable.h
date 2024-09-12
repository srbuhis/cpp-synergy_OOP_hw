#ifndef CONNECTABLE_H
#define CONNECTABLE_H

class IConnectable
{
public:
	virtual void connect() = 0;
	virtual void disconnect() = 0;
	virtual ~IConnectable();
};


#endif
