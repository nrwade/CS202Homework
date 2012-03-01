// date.h
#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>
using std::istream;
using std::ostream;
using std::cin;
using std::cout;
using std::string;

class Date {

private:
	int month;
	int day;
	int year;
	string name; //month name in text
	bool error;
	//Month monthText; //create an instance of the class Month

public:
	Date(); //constructor

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

	void operator--(); //pre
	void operator--(int day); //post

	void operator-(Date date2); 

	friend ostream& operator<<(ostream& output, const Date& m); 

	friend istream& operator>>(istream& input, Date& m);

	bool getError();

};
#endif