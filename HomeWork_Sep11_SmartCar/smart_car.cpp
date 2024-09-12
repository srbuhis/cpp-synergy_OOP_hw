#include <iostream>
#include "device.h"
#include "movable.h"
#include "connectable.h"
#include "smart_car.h"

void SmartCar::start() {
std::cout << "The Smart Car is starting to move" << std::endl;
}

void SmartCar::move(int x, int y) {
std::cout << "The Smart Car is moving" << std::endl;
}

void SmartCar::stop() {
std::cout << "The Smart Car stopped" << std::endl;
}

void SmartCar::connect() {
std::cout << "The Smart Car is connecting" << std::endl;
}

void SmartCar::disconnect() {
std::cout << "The Smart Car disconnected" << std::endl;
}

