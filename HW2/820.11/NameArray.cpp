#include "NameArray.h"

#include <iostream>;
using namespace std;

// constructor that create an array of size length
NameArray::NameArray(int length) {
	
	// sets the length
	this->length = length;

	// creates the array and calls it numbers
	numbers = new float[length];
}

	// destructor frees up the memnory allocated to the array
NameArray::~NameArray() {
	delete [] numbers;
}

	//prints elements in the array one at a time
void NameArray::print() {
	for (int i=0; i<this->length; i++) {
		cout << *(numbers + i) << endl;
	}	
}

	// takes an index and a number and puts the 
	// number in the index
void NameArray::add(int index, int num) {
	*(numbers + index) = num;
}	

	// takes an index and returns the number in that index
float NameArray::get(int index) {
	return *(numbers + index);
}

	//finds and returns the max
float NameArray::max() {

	// sets the max to the first element in the array
	float max = *(numbers + 0);

	// finds the max
	for (int i=0; i<this->length; i++) {
		if ( *(numbers + i) > max ) {
			max = *(numbers + i);
		}
	} 

	return max;
}

	// finds and returns the minimum value in the array
float NameArray::min() {

	// set the min the first value in the array
	float min = *(numbers + 0);

	// finds the min
	for (int i=0; i<this->length; i++) {
		if ( *(numbers + i) < min ) {
			min = *(numbers + i);
		}
	} 

	return min;
}

	// finds and returns the average of the array
float NameArray::avg() {

	// define and initialize the average to 0
	float avg = 0;

	// sum all values in the array
	for (int i=0; i<this->length; i++) {
		avg += *(numbers + i);
	} 

	// find the average
	avg = avg/this->length;

	return avg;
}





