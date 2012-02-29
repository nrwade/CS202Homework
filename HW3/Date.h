// date.h
#ifndef DATE_H
#define DATE_H

#include <iostream>
using std::istream;
using std::ostream;

class Date {

private:
	int month;
	int day;
	int year;

public:
	Date(); //constructor

	//getter functions
	//we have no setter functions as the overloaded >> operator does this
	int getDay();

	int getMonth();

	int getYear();

	void dashedDate ();

	/* void monthFirst (int day, int month, int year);

	void dayFirst (int day, int month, int year); */

	void operator++(int day);

	void operator--(int day);

	void operator-(int date1, int date2); 

	friend ostream& operator<<(ostream& output, const Date& m); 

	friend istream& operator>>(istream& input, Date& m);

};
#endif