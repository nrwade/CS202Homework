#include <iostream>
using namespace std;

#include "Circle.h"

int main() {
	
	

	double radius = -1;	
	do {
		cout << "Please enter a radius: ";
		cin >> radius;
	} while (radius < 0);
	

	Circle * c = new Circle(radius);

	cout << "The Area of your circle is: " << c->getArea() << endl;
	cout << "The Diameter of your circle is: " << c->getDiameter() << endl;
	cout << "The Circumference of your circle is: " << c->getCircumference() << endl;


	delete [] c;

	return 0;
}