#include <vector>
#include "appliance.h"
#include "washingmashine.h"
#include "microwave.h"

int main() {

	std::vector <Appliance*> appliances;

	appliances.push_back(new WashingMachine);
	appliances.push_back(new Microwave);

		for(int i = 0; i < appliances.size(); ++i) {
		appliances[i]->turnOn();
		}
	
		for(int i = 0 ; i < appliances.size(); ++i){
		appliances[i]->turnOff();
		}

		for(int i = 0; i < appliances.size(); ++i) {
		delete appliances[i];
		}
}
