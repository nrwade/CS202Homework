#include <iostream>
#include <string>
using namespace std;

#include "Month.h"

Month::Month() {
	name = "January";
	monthNumber = 1;
}

Month::Month(string& month) {
	this->setMonth(month);
}

Month::Month(int num) {
	this->setMonth(num);
}

void Month::setMonth(string& month) {
	for(int i=0; i < month.length(); ++i)
	{
		month[i] = tolower(month[i]);
	}

	name = month;

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

ostream& operator<<(ostream& output, const Month& m) {
	output << "Month name: " << m.name << ", Month number: " << m.monthNumber << endl;
	return output;
}

istream& operator>>(istream& input, Month& m) {
	input >> m.monthNumber;
	m.setMonth(m.monthNumber);
	return input;
}

std::string Month::getName() {
	return this->name;
}

int Month::getMonthNumber() {
	return this->monthNumber;
}

void Month::operator++() {
	++monthNumber;
	if (monthNumber > 12) {
		monthNumber = 1;
	}
	this->setMonth(monthNumber);	
}	
		
void Month::operator++(int) {
	monthNumber++;
	if (monthNumber > 12) {
		monthNumber = 1;
	}
	this->setMonth(monthNumber);
}//post

void Month::operator--() {
	--monthNumber;
	if (monthNumber < 1) {
		monthNumber = 12;
	}
	this->setMonth(monthNumber);
}

void Month::operator--(int) {
	--monthNumber;
	if (monthNumber < 1) {
		monthNumber = 12;
	}
	this->setMonth(monthNumber);
}
	












