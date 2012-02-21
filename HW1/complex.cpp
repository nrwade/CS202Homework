//user interface interacts with the user to retrieve a string

#include "complex.h"
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;
using std::endl;

/* create constructor (we have a constructor in the header file, 
	but I am told that this is good form) */
Complex::Complex()
{
	
} 

// define the member of UserInterface, 'input'
string Complex::input(string message) 
{
	
	string inputVar; //string to be given by user
	cout << message << endl; // output message
	cout << ": ";
	cin >> inputVar; //get the string
	return inputVar; //return the string
}