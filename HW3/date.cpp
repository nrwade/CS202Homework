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
	cout << month << "/" << day << "/" << year << endl;
}

void Date::monthFirst (){
	cout << monthText.getName() << " " << day << ", "
		<< year << endl;
} 

void Date::dayFirst (){
	cout << day << " " << monthText.getName() << " "
		<< year << endl;
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

	else if (month == 2 || month == 4 || month == 6 || month == 9 || month == 11)
	{
		if (day <1)
		{
			day = 31;
			month -= 1; 
		}
	}

	else if (month == 3)
	{
		if (day < 1)
		{
			day = 29;
			month = 2;
		}
	}

	else
	{
		if (day < 1)
		{
			day = 30;
			month -= 1;
		}
	}

	}

	void Date::operator--(int day){
	day--;

		if (month == 1 && day < 1)
	{
		day = 31;
		month = 12;
		year -= year;
	}

		if (month == 1 && day < 1)
	{
		day = 31;
		month = 12;
		year -= year;
	}

	else if (month == 2 || month == 4 || month == 6 || month == 9 || month == 11)
	{
		if (day <1)
		{
			day = 31;
			month -= 1; 
		}
	}

	else if (month == 3)
	{
		if (day < 1)
		{
			day = 29;
			month = 2;
		}
	}

	else
	{
		if (day < 1)
		{
			day = 30;
			month -= 1;
		}
	}
}


void Date::operator-(Date date1, Date date2){
	// first we calculate the number of the of the year it is
	// we do this by storing the number of days of the months in an array
	int numberDays[12];
	numberDays[0] = numberDays[2] = numberDays[4] = numberDays[6] = 31;
	numberDays[7] = numberDays[9]= numberDays[11] = 31;
	numberDays[1] = 29;
	numberDays[3] = numberDays[5] = numberDays[8] = numberDays[10] = 30;

	int totalDays1=0;

	for (int i=0; i < date1.month - 1; i++)
	{
		totalDays1 += numberDays[i];
	}

	totalDays1+= date1.day;
	
	int totalDays2=0;

	for (int i=0; i < date2.month - 1; i++)
	{
		totalDays2 += numberDays[i];
	}

	totalDays2+= date2.day;

	int totalDifference = 0;

	if (date1.year == date2.year)
	{
		totalDifference = totalDays1 - totalDays2;
	}

	else if (date1.year < date2.year)
	{
		totalDifference = (365 - totalDays1) + totalDays2 +
			(((date1.year - date2.year) - 1) * 365);
	}

	else
	{
			totalDifference = (365 - totalDays2) + totalDays1 +
			(((date2.year - date1.year) - 1) * 365);	
	}


	cout << "The between date 1 and date 2 is " << totalDifference << endl;
}


ostream& operator << (ostream& output, const Date& m) {
	output << monthText.getName() << " " << m.day << ", "
			<< m.year << endl;
}


// user input is of the form mm/dd/yyyy
istream& operator >> (istream& input, Date& m) {

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

	string monthString = dateText.substr(3,2);

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