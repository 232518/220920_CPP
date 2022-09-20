#include <iostream>
#include <string>
using namespace std;

class Car {
public:
	int speed;
	int gear;
	string color;

	void speedUp();
	void speedDown();
};

void Car::speedUp() {
	speed += 10;
}

void Car::speedDown() {
	speed -= 10;
}

int main() {
	Car myCar;

	myCar.speed = 100;
	myCar.gear = 3;
	myCar.color = "red";

	myCar.speedUp();
	myCar.speedDown();
}