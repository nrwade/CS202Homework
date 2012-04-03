#include "NumDays.h"

// constructor that sets hours and days
NumDays::NumDays(double hours) {
	this->hours = hours; 
	this->days = hours/8;
}

// sets input of days and updates hours accordingly
void NumDays::setDays(double days) {
	this->days = days;
	this->hours = days*8;
}

// sets input of hours and updates days accordingly
void NumDays::setHours(double hours) {
	this->hours = hours;
	this->days = hours / 8;
}

// returns days
double NumDays::getDays() {
	return days;
}

// returns hours
double NumDays::getHours() {
	return hours;
}

// overloads + operator so that when two day values are added,
// the sum of their hours is returned
double NumDays::operator+(NumDays n1) {
	return hours + n1.getHours();
}


// overloads - operator so that when two day values are subtracted,
// the difference in their hours is returned
double NumDays::operator-(NumDays n1) {
	return hours - n1.getHours();
}

// overloads the ++ operator so that hours is incremented by 1
void NumDays::operator++(int) {
	this->setHours(this->hours + 1);
}

// overloads the -- operator so that hours is decremented by 1
void NumDays::operator--(int) {
	this->setHours(this->hours - 1);
}





