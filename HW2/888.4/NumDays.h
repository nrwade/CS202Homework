#ifndef NUMDAYS_H
#define NUMDAYS_H

class NumDays {

private:

	double hours;
	double days;
	
public:

	//constructor
	NumDays(double hours);

	// setter function for days
	void setDays(double days);

	// setter function for hours
	void setHours(double hours);

	// getter function for days
	double getDays();

	// getter function for hours
	double getHours();

	// we will overload the + operator
	double operator+(NumDays n1);

	// we will overload the - operator
	double operator-(NumDays n1);

	// going to overload ++ operator
	void operator++(int);

	// going to overload -- operator
	void operator--(int);
	
};

#endif
