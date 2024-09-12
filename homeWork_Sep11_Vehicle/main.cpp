#include <vector>
#include "vehicle.h"
#include "car.h"
#include "electric_car.h"

int main() {

	std::vector <Vehicle*> vehicles;

	vehicles.push_back(new Car());
	vehicles.push_back(new ElectricCar());



		for(int i = 0; i < vehicles.size(); ++i) {
		vehicles[i]->move();
		}

		for(int i = 0; i < vehicles.size(); ++i) {
		delete vehicles[i];
		}

}
