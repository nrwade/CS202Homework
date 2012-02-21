/* Nicole Wade
CS202
9 Feb 2012
HW 1 # 3-5
This program utilizes the complex header and cpp files to get from the user 
and print two values. Ideally these values would consist of one real and one
imaginary, but we do not check for that here. */

#include "complex.h"
#include <string>
using std::string;

int main()
{
	Complex complexNumbers= Complex(); //instantiating complexNumbers

		double realNumber=0; //declare and initialize realNUmber to hold the real number
		double imagNumber=0; //declare and initialize imagNumber to hold the imaginary number


		// create member function 'get' to get a real number
		realNumber= complexNumbers.get("Please enter a real number.");

		// create member function 'get' to get a imaginary number
		imagNumber= complexNumbers.get("Please enter a imaginary number.");

		// create member function 'set'
		complexNumbers.set(realNumber, imagNumber);

		//create member function 'show'
		//complexNumbers.show(realNumber, imagNumber);

		complexNumbers.show();

	return 0;
}