#include <vector>
#include "device.h"
#include "movable.h"
#include "connectable.h"
#include "smart_car.h"

int main() {

Device* devices = new SmartCar;
IMovable* movables = new SmartCar;
IConnectable* connectables = new SmartCar;

devices->start();
movables->move(10, 50);
movables->stop();
connectables->connect();
connectables->disconnect();

}
