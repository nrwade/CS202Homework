#include "NumDays.h"

NumDays::NumDays(double hours) {
	this->hours = hours; 
	this->days = hours/8;
}

void NumDays::setDays(double days) {
	this->days = days;
	this->hours = days*8;
}
void NumDays::setHours(double hours) {
	this->hours = hours;
	this->days = hours / 8;
}
double NumDays::getDays() {
	return days;
}
double NumDays::getHours() {
	return hours;
}

double NumDays::operator+(NumDays n1) {
	return this->getHours() + n1.getHours();
}

double NumDays::operator-(NumDays n1) {
	return this->getHours() - n1.getHours();
}

void NumDays::operator++() {
	this->setHours(this->hours + 1);
}

void NumDays::operator--() {
	this->setHours(this->hours - 1);
}





