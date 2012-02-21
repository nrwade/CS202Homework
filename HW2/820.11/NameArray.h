#ifndef NAMEARRAY_H
#define NAMEARRAY_H

class NameArray {
	public:
		int length;
		float * numbers;

	public: 
		NameArray();
		NameArray(int length);
		~NameArray();

		void print();

		void add(int index, int num);
		float get(int index);
		float max();
		float min();
		float avg();

};


#endif