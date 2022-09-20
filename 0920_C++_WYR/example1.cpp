#include <iostream>
using namespace std;

//class Rectangle { //선언부
//public:
//	int width, height;
//	int calcArea() {
//		return width*height;
//  }
//};

class Rectangle {  //구현부
public:
	int width, height;
	int calcArea();
};

int Rectangle::calcArea() {
	return width * height;
}
