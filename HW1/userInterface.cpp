//userinterface interacts with the user to retrieve a string

#include "userInterface.h"
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;
using std::endl;

/* create constructor (we have a constructor in the header file, 
	but I am told that this is good form) */
UserInterface::UserInterface()
{
	
} 

// define the member of UserInterface, 'input'
//input shows a message to the user, then returns their response
string UserInterface::input(string message) 
{
	
	string inputVar; //string to be given by user
	cout << message << endl; // output message
	cout << ": ";
	cin >> inputVar; //get the string
	return inputVar; //return the string
}