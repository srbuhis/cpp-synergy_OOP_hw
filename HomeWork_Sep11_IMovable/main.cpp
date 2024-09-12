#include <vector>
#include "imovable.h"
#include "car.h"
#include "robot.h"

int main() {

	std::vector <IMovable*> movables;

	movables.push_back(new Car);
	movables.push_back(new Robot);

		for(int i = 0; i < movables.size(); ++i) {
		movables[i]->move(10, 20);
		}

		for(int i = 0; i < movables.size(); ++i) {
		movables[i]->stop();
		}

		for(int i = 0; i < movables.size(); ++i) {
		delete movables[i];
		}

}
