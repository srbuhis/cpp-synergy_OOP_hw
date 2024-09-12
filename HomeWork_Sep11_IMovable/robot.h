#ifndef ROBOT_H
#define ROBOT_H
#include "imovable.h"

class Robot : public IMovable
{
public:
	void move(int m, int n) override;
	void stop() override;
	};


#endif
