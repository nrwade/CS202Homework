// date.cpp
#include <iostream>
#include <string>

#include "Date.h"
#include "Month.h"

using std::ostream;
using std::istream;
using std::cin;
using std::cout;
using std::endl;
using std::string;


//default constructor
Date::Date(){}

int Date::getDay(){
	return this-> day;
}

int Date::getMonth(){
	return this-> month;
}

int Date::getYear(){
	return this-> year;
}


void Date::dashedDate (){
	cout << month << "/" << day << year << endl;
}

void Date::operator++(int day){
	++day;

	if (month == 12 && day > 31)
	{
		month = 1;
		day = 1;
		year += year;
	}

	else if (month == 1 || month == 3 || month == 5 || month == 7
	|| month == 8 || month == 10)
	{
		if (day > 31)
		{
			day = 1;
			month += month;
		}
	}

	else if (month == 4 || month == 6 || month == 11)
	{
		if (day > 30)
		{
			day = 1;
			month += 1;
		}
	}

	else
	{
		if (day > 28) //leap years not considered
		{
			day = 1;
			month += month; 
		}
	}

}

void Date::operator++(int day){
	day++;
	if (month == 12 && day > 31)
	{
		month = 1;
		day = 1;
		year += year;
	}

	else if (month == 1 || month == 3 || month == 5 || month == 7
	|| month == 8 || month == 10)
	{
		if (day > 31)
		{
			day = 1;
			month += month;
		}
	}

	else if (month == 4 || month == 6 || month == 11)
	{
		if (day > 30)
		{
			day = 1;
			month += 1;
		}
	}

	else
	{
		if (day > 28) //leap years not considered
		{
			day = 1;
			month += month; 
		}
	}
}

void Date::operator--(int day){
	--day;
	if (month == 1 && day < 1)
	{
		day = 31;
		month = 12;
		year -= year;
	}

	/* else if (month == 1 || month == 3 || month == 5 || month == 7
	|| month == 8 || month == 10)
	{
		if (day > 31)
		{
			day = 1;
			month += month;
		}
	}

	else if (month == 4 || month == 6 || month == 11)
	{
		if (day > 30)
		{
			day = 1;
			month += 1;
		}
	}

	else
	{
		if (day > 28) //leap years not considered
		{
			day = 1;
			month += month; 
		}
	}
	*/

}

void Date::operator--(int day){
	day--;
		if (month == 1 && day < 1)
	{
		day = 31;
		month = 12;
		year -= year;
	}
}


//---------so do I have to make an instance of month within this class??
/*
ostream& operator<<(ostream& output, Date& m) {
	output<<
}
*/

// user input is of the form mm/dd/yyyy
istream& operator>>(istream& input, Date& m) {

	int day;
	int month;
	int year;

	string dateText;

	input >> dateText;

	string dayString= dateText.substr(3,2);

	day = atoi(dayString.c_str())

	if (day > 31 || day<1)
	{
		cout<< "Months have between 1 and 31 days." << endl;
	//------how do I break out here--------
	}
	else
	{
		m.day = day;
	}

	string monthString= dateText.substr(3,2);

	month = atoi(monthString.c_str())

	if (month > 12 || month < 1)
	{
		cout<< "There are between 1 and 12 months."
	//------how do I break out here--------
	}
	else
	{
		m.day = day;
	}

	string yearString= dateText.substr(6,4);
	
	m.year = atoi(yearString.c_str());

	return input;
}