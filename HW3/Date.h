// date.h
#ifndef DATE_H
#define DATE_H

#include <iostream>
#include "Month.h"
using std::istream;
using std::ostream;
using std::cin;
using std::cout;

class Date {

private:
	int month;
	int day;
	int year;
	Month monthText; //create an instance of the class Month

public:
	Date(); //constructor

	// assign the month
	monthText.setMonth(month);

	//getter functions
	//we have no setter functions as the overloaded >> operator does this
	int getDay();

	int getMonth();

	int getYear();

	void dashedDate ();

	void monthFirst ();

	void dayFirst (); 

	void operator++(); //pre
	void operator++(int day); //post

	void operator++(); //pre
	void operator--(int day); //post

	void operator-(Date date1, Date date2); 

	friend ostream& operator<<(ostream& output, const Date& m); 

	friend istream& operator>>(istream& input, Date& m);

};
#endif