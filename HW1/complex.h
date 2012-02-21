//complex header file

#ifndef COMPLEX_H
#define COMPLEX_H

#include <string>
using std::string;

	class Complex
	{
	private:
		//create data member to hold the real number
		double real_; 
		//create data member to hold the imgainary number
		double imag_;
				
	public:
		Complex(); //constructor

		//create member function get to get doubles from user
		double get(string command); 

		//create member function set to set private values equal to user input 
		void set(double real, double imag);

		//create member function to display the real and imag. values
		void show();
	
	};

#endif

