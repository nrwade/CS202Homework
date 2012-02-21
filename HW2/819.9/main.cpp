#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Circle.h"

int main() {
	
	
	// set the radius equal to -1 so we can ensure that
	// the user isgiving us valid input
	// what was the point of a constructor that has us
	// set radius=0? 
	double radius = -1;	

	// keeps asking for radius until positive radius is entered
	do {
		cout << "Please enter a radius: ";
		cin >> radius;
	} while (radius < 0);

	// create a pointer to an instance of a circle
	Circle * c = new Circle(radius);

	// output the area diameter, and circumference measurements
	cout << "The Area of your circle is: " << c->getArea() << endl;
	cout << "The Diameter of your circle is: " << c->getDiameter() << endl;
	cout << "The Circumference of your circle is: " << c->getCircumference() << endl;

	// free up the memory we used for c
	// How do we know if we should do this in the main or in the class?
	delete [] c;

	return 0;
}