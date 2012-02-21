#include <iostream>
#include <string>
using std::ostream;
using std::istream;
using std::cout;
using std::cin;
using std::endl;
using std::string;

#include "Month.h"

// default constructor
Month::Month() {
	name = "January";
	monthNumber = 1;
}

// constructor that sets month name
Month::Month(string& month) {
	this->setMonth(month);
}

// constructor that sets month number
Month::Month(int num) {
	this->setMonth(num);
}

// sets month
void Month::setMonth(string& month) {

	// sets string to all lowercase in case user types
	// in month weird
	for(int i=0; i < month.length(); ++i)
	{
		month[i] = tolower(month[i]);
	}

	name = month;

	// set month number to correspond with month name
	if ( month == "january" ) monthNumber = 1;
	if ( month =="february") monthNumber = 2;
	if ( month == "march")	monthNumber = 3;
	if ( month == "april") monthNumber = 4;
	if ( month == "may") monthNumber = 5;						
	if ( month == "june") monthNumber = 6;
	if ( month == "july") monthNumber = 7;	
	if ( month == "august") monthNumber = 8;
	if ( month == "september") monthNumber = 9;
	if ( month == "october") monthNumber = 10;
	if ( month == "november") monthNumber = 11;
	if ( month == "december") monthNumber = 12;
}

// sets month name to correspond with month number
void Month::setMonth(int num) {
	monthNumber = num;

	if (num == 1) name = "january"; 
	if  (num == 2) name = "february";
	if 	(num == 3) name = "march";
	if  (num == 4) name = "april";
	if (num == 5)	name = "may";					
	if  (num == 6) name = "june";
	if  (num == 7)	 name = "july";
	if  (num == 8) name = "august";
	if (num == 9) name = "september"; 
	if  (num == 10) name = "october";
	if  (num == 11) name = "november";
	if (num == 12) name = "december";
}

// when we use << with our class it will output month name and month number
ostream& operator<<(ostream& output, const Month& m) {
	output << "Month name: " << m.name << ", Month number: " << m.monthNumber << endl;
	return output;
}

// when we use >> with our class it will sett the month number
istream& operator>>(istream& input, Month& m) {
	input >> m.monthNumber;
	m.setMonth(m.monthNumber);
	return input;
}

// returns month name
string Month::getName() {
	return this->name;
}

// returns month number
int Month::getMonthNumber() {
	return this->monthNumber;
}

// overloads ++ and sets number to 1 if greater than 12
// pre
void Month::operator++() {
	++monthNumber;
	if (monthNumber > 12) {
		monthNumber = 1;
	}
	this->setMonth(monthNumber);	
}	
	
// overloads ++ and sets number to 1 if greater than 12
// post		
void Month::operator++(int) {
	monthNumber++;
	if (monthNumber > 12) {
		monthNumber = 1;
	}
	this->setMonth(monthNumber);
}

// overloads -- and set number to 12 if less than 1
// pre
void Month::operator--() {
	--monthNumber;
	if (monthNumber < 1) {
		monthNumber = 12;
	}
	this->setMonth(monthNumber);
}

// overloads -- and set number to 12 if less than 1
// post
void Month::operator--(int) {
	--monthNumber;
	if (monthNumber < 1) {
		monthNumber = 12;
	}
	this->setMonth(monthNumber);
}
	












