#include <iostream>
using namespace std;

//class Car { //�����
//public:
//	int speed, color;
//	void sppedUp() {
//		speed += 10;
//	}
//	void speedDown() {
//		speed -= 10;
//	}
//};

class Car {  //������
public:
	int speed, color;
	void speedUp();
	void speedDown();
};

void Car::speedUp() {
	speed += 10;
}

void Car::speedDown() {
	speed -= 10;
}