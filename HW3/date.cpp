// date.cpp
#include <iostream>
#include <string>

#include "Date.h"

using std::ostream;
using std::istream;
using std::cin;
using std::cout;
using std::endl;
using std::string;


//default constructor
// sets error to false
Date::Date() {
	_error = false; 
}

// returns day
int Date::getDay(){
	return this-> _day;
}

//returns month
int Date::getMonth(){
	return this-> _month;
}


//returns year
int Date::getYear(){
	return this-> _year;
}

// displays the date in the form mm/dd/yyyy
void Date::dashedDate (){
	cout << _month << "/" << _day << "/" << _year << endl;
}

// displays the date as month dd, yyyy
void Date::monthFirst (){
	cout << _name << " " << _day << ", "
		<< _year << endl;
} 

// displays the date as dd month yyyy
void Date::dayFirst (){
	cout << _day << " " << _name << " "
		<< _year << endl;
}

//overloads the ++ operator
// pre
void Date::operator++(){

	++_day;

	// sets date to the new year if a day is added to Dec 31
	if (_month == 12 && _day > 31)
	{
		_month = 1;
		_day = 1;
		_year += 1;
	}

	// if a month with 31 days gets a day added to it, start
	// the new month
	else if (_month == 1 || _month == 3 || _month == 5 || _month == 7
	|| _month == 8 || _month == 10)
	{
		if (_day > 31)
		{
			_day = 1;
			_month += 1;
		}
	}

	// if a month with 30 days gets a day added to it, start
	// the new month
	else if (_month == 4 || _month == 6 || _month == 11)
	{
		if (_day > 30)
		{
			_day = 1;
			_month += 1;
		}
	}

	// if the last day of the second month has a day added to it
	// the next month starts
	else
	{
		if (_day > 28) //leap years considered
		{
			_day = 1;
			_month += 1; 
		}
	}


	// changes the number of the month to the
	// written _name
	// come back and make function to do this if time
	if (_month == 1) _name = "January"; 
	if  (_month == 2) _name = "February";
	if 	(_month == 3) _name = "March";
	if  (_month == 4) _name = "April";
	if (_month == 5)	_name = "May";					
	if  (_month == 6) _name = "June";
	if  (_month == 7) _name = "July";
	if  (_month == 8) _name = "August";
	if (_month == 9) _name = "September"; 
	if  (_month == 10) _name = "October";
	if  (_month == 11) _name = "November";
	if (_month == 12) _name = "December";

}

// overloads ++ operator 
// post	
void Date::operator++(int){

	_day++;

	//if a day is added to dec 31, start new year
	if (_month == 12 && _day > 31)
	{
		_month = 1;
		_day = 1;
		_year += 1;
	}

	// if a day is added to the last day of a month,
	// start new month
	else if (_month == 1 || _month == 3 || _month == 5 || _month == 7
	|| _month == 8 || _month == 10)
	{
		if (_day > 31)
		{
			_day = 1;
			_month += 1;
		}
	}

	else if (_month == 4 || _month == 6 || _month == 11)
	{
		if (_day > 30)
		{
			_day = 1;
			_month += 1;
		}
	}

	else
	{
		if (_day > 28) //leap years not considered
		{
			_day = 1;
			_month += 1; 
		}
	}

	//take number of month and set name of month
	if (_month == 1) _name = "January"; 
	if  (_month == 2) _name = "February";
	if 	(_month == 3) _name = "March";
	if  (_month == 4) _name = "April";
	if (_month == 5) _name = "May";					
	if  (_month == 6) _name = "June";
	if  (_month == 7) _name = "July";
	if  (_month == 8) _name = "August";
	if (_month == 9) _name = "September"; 
	if  (_month == 10) _name = "October";
	if  (_month == 11) _name = "November";
	if (_month == 12) _name = "December";
}

// overload -- operator
// pre
void Date::operator--(){
	--_day;

	// if a day is subtracted from the first day of the year,
	// go to previous year
	if (_month == 1 && _day < 1)
	{
		_day = 31;
		_month = 12;
		_year -= 1;
	}

	// if a day is subtracted from the first day of the month,
	// go to previous month
	else if (_month == 2 || _month == 4 || _month == 6 || 
			_month == 9 || _month == 11)
	{
		if (_day <1)
		{
			_day = 31;
			_month -= 1; 
		}
	}

	else if (_month == 3)
	{
		if (_day < 1)
		{
			_day = 29;
			_month = 2;
		}
	}

	else
	{
		if (_day < 1)
		{
			_day = 30;
			_month -= 1;
		}
	}

	// should have made a function to do this
	// set month name from month number
	if (_month == 1) _name = "January"; 
	if  (_month == 2) _name = "February";
	if 	(_month == 3) _name = "March";
	if  (_month == 4) _name = "April";
	if (_month == 5)	_name = "May";					
	if  (_month == 6) _name = "June";
	if  (_month == 7) _name = "July";
	if  (_month == 8) _name = "August";
	if (_month == 9) _name = "September"; 
	if  (_month == 10) _name = "October";
	if  (_month == 11) _name = "November";
	if (_month == 12) _name = "December";

	}

	//overload -- operator
	//post
	void Date::operator--(int){
	_day--;

	//if subtracting day from first day of january,
	// return to previous year
	if (_month == 1 && _day < 1)
	{
		_day = 31;
		_month = 12;
		_year -= 1;
	}

	// if subtracting day from the first of month
	// return to previous month 
	if (_month == 1 && _day < 1)
	{
		_day = 31;
		_month = 12;
		_year -= 1;
	}

	else if (_month == 2 || _month == 4 || _month == 6 || 
			_month == 9 || _month == 11)
	{
		if (_day <1)
		{
			_day = 31;
			_month -= 1; 
		}
	}

	else if (_month == 3)
	{
		if (_day < 1)
		{
			_day = 29;
			_month = 2;
		}
	}

	else
	{
		if (_day < 1)
		{
			_day = 30;
			_month -= 1;
		}
	}

	// this code...again
	if (_month == 1) _name = "January"; 
	if  (_month == 2) _name = "February";
	if 	(_month == 3) _name = "March";
	if  (_month == 4) _name = "April";
	if (_month == 5)	_name = "May";					
	if  (_month == 6) _name = "June";
	if  (_month == 7) _name = "July";
	if  (_month == 8) _name = "August";
	if (_month == 9) _name = "September"; 
	if  (_month == 10) _name = "October";
	if  (_month == 11) _name = "November";
	if (_month == 12) _name = "December";
}

//date2 is the right side of the operator
void Date::operator-(Date date2){
	// first we calculate the number of the of the year it is
	// we do this by storing the number of days of the months in an array
	int numberDays[12];
	numberDays[0] = numberDays[2] = numberDays[4] = numberDays[6] = 31;
	numberDays[7] = numberDays[9]= numberDays[11] = 31;
	numberDays[1] = 29;
	numberDays[3] = numberDays[5] = numberDays[8] = numberDays[10] = 30;

	int totalDays1=0;

	// first count the number of days in the given amount of full months
	// ex. if given March 3, we have 2 full months
	for (int i=0; i <_month - 1; i++)
	{
		totalDays1 += numberDays[i];
	}

	// add the number of days to the number of days in months
	// ex. if given march 3, we add 3
	totalDays1 += _day;
	
	//repeat same process for date 2
	int totalDays2=0;

	for (int i=0; i < date2._month - 1; i++)
	{
		totalDays2 += numberDays[i];
	}

	totalDays2+= date2._day;

	// now we need the total difference
	int totalDifference = 0;

	if (_year == date2._year)
	{
		totalDifference = totalDays1 - totalDays2;
	}

	// we must decide which year is larger to decide how to 
	// do the subtraction
	else if (_year < date2._year)
	{
		totalDifference = (365 - totalDays1) + totalDays2 +
			(((_year - date2._year) - 1) * 365);
	}

	else
	{
			totalDifference = (365 - totalDays2) + totalDays1 +
			(((date2._year - _year) - 1) * 365);	
	}


	cout << "The difference between date 1 and date 2 is " 
		<< totalDifference << endl;
}

// overloaded ostream operator
// displays month dd, yyyy
ostream& operator<<(ostream& output, const Date& m) {
	output << m._name << " " << m._day << ", "
			<< m._year << endl;
	return output;
}

// overloaded istream operator
// sets _day, _month, _year
// user input is of the form mm/dd/yyyy
istream& operator >> (istream& input, Date& m) {

	int day;
	int month;
	int year;

	string dateText;

	input >> dateText;

	//isolate the part of the string representing the day
	string dayString= dateText.substr(3,2);

	//get integer to represent the day
	day = atoi(dayString.c_str());

	//error testing for proper number of days
	if (day > 31 || day<1)
	{
		cout<< "Months have between 1 and 31 days." << endl;
		m._error = true;
	}

	else
	{
		m._day = day;
	}

	//isolate the part of the string representing the month
	string monthString = dateText.substr(0,2);

	// get integer to represent month
	month = atoi(monthString.c_str());

	//error testing for month
	if (month > 12 || month < 1)
	{
		cout<< "There are between 1 and 12 months." << endl;
		m._error = true;
	}
	else
	{
		m._month = month;
	}

	//isolate the part of the string representing the year
	string yearString= dateText.substr(6,4);
	
	//set _year to corresponding integer
	m._year = atoi(yearString.c_str());

	// more of this
	if (m._month == 1) m._name = "January"; 
	if  (m._month == 2) m._name = "February";
	if 	(m._month == 3) m._name = "March";
	if  (m._month == 4) m._name = "April";
	if (m._month == 5)	m._name = "May";					
	if  (m._month == 6) m._name = "June";
	if  (m._month == 7) m._name = "July";
	if  (m._month == 8) m._name = "August";
	if (m._month == 9) m._name = "September"; 
	if  (m._month == 10) m._name = "October";
	if  (m._month == 11) m._name = "November";
	if (m._month == 12) m._name = "December";

	return input;
}

// returns error value to determine if code should 
// continue to run 
bool Date::getError() {
	return this->_error;
}