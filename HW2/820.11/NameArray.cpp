#include "NameArray.h"

#include <iostream>;
using namespace std;

NameArray::NameArray(int length) {
	this->length = length;

	numbers = new float[length];
}

NameArray::~NameArray() {
	delete [] numbers;
}

void NameArray::print() {
	for (int i=0; i<this->length; i++) {
		cout << *(numbers + i) << endl;
	}	
}


void NameArray::add(int index, int num) {
	*(numbers + index) = num;
}	

float NameArray::get(int index) {
	return *(numbers + index);
}

float NameArray::max() {
	float max = *(numbers + 0);

	for (int i=0; i<this->length; i++) {
		if ( *(numbers + i) > max ) {
			max = *(numbers + i);
		}
	} 

	return max;
}

float NameArray::min() {
	float min = *(numbers + 0);

	for (int i=0; i<this->length; i++) {
		if ( *(numbers + i) < min ) {
			min = *(numbers + i);
		}
	} 

	return min;
}

float NameArray::avg() {
	float avg = 0;

	for (int i=0; i<this->length; i++) {
		avg += *(numbers + i);
	} 

	avg = avg/this->length;

	return avg;
}





