// specification file for the Circle class
#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
	private:
	 
		// declare member variable radius 
		double radius;

		// declare member variable pi and initialize it to 3.14159
		// declare it a const as the value will not change
		const double pi 3.14159;

	public:

		// default constructor, will set radius to 0
		Circle(); 

		//constructor that accepts an argument, will allow user to set radius
		Circle(double initializeRad); 

		// mutator function for the radius variable
		// takes a user defined value of the radius
		void setRadius(double setRad);

		// accessor function for the radius variable
		// takes a double for a user defines radius and returns it
		double getRadius(double getRad);

		// function that returns area of the circle
		// takes doubles for pi and the radius
		double getArea(double pi, double rad);

		// function that returns diameter
		// takes a double for the radius
		double getDiameter(double rad);

		// function that returns circumference
		// takes doubles for pi and the radius
		double getCircumference(double pi, double rad);

};
#endif