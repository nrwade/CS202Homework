/* Nicole Wade
CS202
9 February 2012
HW 1 #2 
This program asks for an ascii filename then reads the file and prints it */

#include <iostream>
#include <string>
#include <fstream>
#include "userinterface.h"
using std::string;
using std::ifstream;
using std::ios;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	UserInterface getInfo = UserInterface(); // instantiating getInfo

	string fileName = ""; //declare and initialize the file name

	ifstream dataFile; //declaring an ifstream object named dataFile

	// calling the method 'input' on the UserInterface instance getInfo
	fileName= getInfo.input("What file would you like to open?");

	// opening the file in input mode
	dataFile.open(fileName.c_str(), ios::in);

	//check for errors 
	if (!dataFile)
	{
		cout<< "ERROR" << endl;
	}

	while (dataFile >> fileName) // print the file to the screen
	{
		cout << fileName;
	}

	cout<< endl;//making it prettier

	dataFile.close();
		
	return 0;
}