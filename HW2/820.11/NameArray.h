#ifndef NAMEARRAY_H
#define NAMEARRAY_H

class NameArray {
	public:

		int length;

		//we use a pointer here so that we can dynamically allocate the array
		float * numbers;

	public: 

		//default constructor
		NameArray();

		// constructor
		NameArray(int length);

		//destructor
		~NameArray();

		// add numbers to the array
		void add(int index, int num);

		// get numbers from the array
		float get(int index);

		// find the max
		float max();

		//find the min
		float min();

		// find the average
		float avg();

		//prints the values
		void print();

};


#endif