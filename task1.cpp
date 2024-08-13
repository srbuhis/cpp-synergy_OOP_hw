#include <iostream>
#include <string>

class Car {

	private:
		std::string make;
		std::string model;
		int year;
		double mileage;
	
	public:
		
		void setMake(const std::string make_value) {
			make = make_value;
		}
		void setModel(const std::string model_value) {
			model = model_value;
		}
		void setYear(const int year_value) {
			year = year_value;
		}
		void setMileage(const double mileage_value) {
			mileage = mileage_value;
		} 
			
		std::string getMake() const {
			return make;
		}

		std::string getModel() const {
			return model;
	       	}
		int getYear() const {
			return year;
		}

		double getMileage() const {
			return mileage;
		}

};

	void displayInfo(Car &obj) {
		std::cout << obj.getMake() << std::endl << obj.getModel() << std::endl << obj.getYear() << std::endl << obj.getMileage();
	}

int main() {

	Car obj;

	std::string make_value;
	//std::cin >> make_value;

	std::string model_value;
	//std::cin >> model_value;

	int year_value;
	//std::cin >> year_value;

	double mileage_value;
	//std::cin >> mileage_value;

	obj.setMake("CarsMotors");
	obj.setModel("Tesla");
	obj.setYear(2023);
	obj.setMileage(200.15);

	displayInfo(obj);
}
