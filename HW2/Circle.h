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
		void setRadius(double setRad);

		// accessor function for the radius variable
		double getRadius(double getRad);

		// function that returns area of the circle
		double getArea()

};
#endif