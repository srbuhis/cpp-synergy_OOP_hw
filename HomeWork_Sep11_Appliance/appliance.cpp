#include <iostream>
#include "appliance.h"

bool Appliance::turnOff() {
	if (action == 0) {
		return action;
	}
		else {action = 0;
	}
	return action;
}

void Appliance::setAction(bool &value) {
action = value;
}

bool Appliance::getAction() const {
return action;
} 

