#include <iostream>
using namespace std;

//class Rectangle { //�����
//public:
//	int width, height;
//	int calcArea() {
//		return width*height;
//  }
//};

class Rectangle {  //������
public:
	int width, height;
	int calcArea();
};

int Rectangle::calcArea() {
	return width * height;
}
