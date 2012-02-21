// specification file for the Circle class
#ifndef CIRCLE_H
#define CIRCLE_H


class Circle
{
	
	private:
	 
		// declare member variable radius 
		double radius;

		// declare member variable pi 
		// declare it a const as the value will not change
		// note: C++ does not allow us to initialize this here
		// we must initialize pi in Circle.cpp
		const double pi;

	public:
		// default constructor, will set radius to 0
		Circle();
		//constructor that accepts an argument, will allow user to set radius
		Circle(double radius); 

		// mutator function for the radius variable
		// takes a user defined value of the radius
		void setRadius(double radius);

		// accessor function for the radius variable
		double getRadius();

		// function that returns area of the circle
		double getArea();

		// function that returns diameter
		double getDiameter();

		// function that returns circumference
		double getCircumference();
		

};
#endif