// implementation file for the circle class

#include "Circle.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;



// default constructor
// sets radius equal to 0
Circle::Circle() : pi(3.14159)
{
	radius = 0.0;
}

//constructor that accepts the radius of the ircle as an argument
Circle::Circle(double radius) : pi(3.14159)
{
	this->setRadius(radius); 
}

// setRadius takes a user defined value of the radius 
// and set the value of radius
double Circle::getRadius()
{
	return radius; 
}

void Circle::setRadius(double radius) {
	this->radius = radius; 
}

// setRadius takes a user defined value of the radius 
// and set the value of radius
double Circle::getArea()
{
	// not using this notation for readability 
	return pi*radius*radius;
}

double Circle::getDiameter()
{
	// not using this notation for readability 
	return 2.0*radius;
}

double Circle::getCircumference()
{
	// not using this notation for readability 
	return getDiameter()*pi;
}

//




