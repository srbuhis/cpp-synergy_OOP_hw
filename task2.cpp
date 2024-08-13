#include <iostream>

class Car 
{
private:
	std::string make;
	std::string model;
	int year;
	double mileage;

public:
	Car() : make(""), model(""), year(0), mileage(0.0) {
		std::cout << "Default constructor called" << std::endl;
	}
	
	Car(const std::string carMake, const std::string carModel, int carYear, double carMileage) : make(carMake), model(carModel), year(carYear), mileage(carMileage) {
		std::cout << "Parameterized constructor called" << std::endl;
	}
	
	Car(const Car &other)
	: make(other.make), model(other.model), year(other.year), mileage(other.mileage) {
		std::cout << "Copy constructor called" << std::endl;
	}	

	~Car() {
	
	}

	void displayInfo() {
		std::cout << make << std::endl << model << std::endl << year << std::endl << mileage <<std::endl;
	}
};

int main() {

	Car obj1;
	obj1.displayInfo();

	Car obj2("Tesla", "S Class", 2018, 2000);
	obj2.displayInfo();

	Car obj3 = obj2;
	obj3.displayInfo();
	
}
