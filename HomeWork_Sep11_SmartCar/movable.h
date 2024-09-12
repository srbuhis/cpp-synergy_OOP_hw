#ifndef IMOVABLE_H
#define IMOVABLE_H

class IMovable
{
public:
	virtual void move(int x, int y) = 0;
	virtual void stop() = 0;
	virtual ~IMovable();
};

#endif
