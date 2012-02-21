/* Nicole Wade
CS202
9 Feb 2012
Homework 1 Problem 1
This program asks for both a filename and a string and writes the string to the file in both ascii and binary format. */
#include <fstream>
#include <string>
#include "userinterface.h"
using std::string;
using std::ofstream;
using std::ios;

int main()
{
	UserInterface getInfo = UserInterface(); // instantiating getInfo
	
	string text=""; // declaring and initializing the string 'text'

	// invoking the method 'input' on the UserInterface instance getInfo
	text= getInfo.input("What data would you like to put in a file?"); 

	ofstream dataFileBin; // declaring an ofstream object named dataFile
	ofstream dataFileTxt;

	string fileName=""; // declaring and initializing the string 'fileName'

	// calling the method 'input' on the UserInterface instance getInfo
	fileName= getInfo.input("What would you like to name the file?");

	string binaryName = fileName + ".bin"; //the name for the binary file
	string textName= fileName + ".txt"; //the  name for the text file


	// writing a file given by the string 'fileName' using the ofstream object 'dataFile'
	dataFileBin.open(binaryName.c_str(), ios::app | ios::binary); 
	dataFileTxt.open(textName.c_str(), ios::app); 

	// writing data in binary from the string 'text' into the ofstream 'dataFile'
	//using size to pass the number of bits
	for (int i=0; i<text.size(); i++)
	{
		dataFileBin.write((char *)&text[i], text.size()); 
	}

	dataFileTxt << text; //put data into the file in ascii form

	dataFileBin.close(); //close the binary file
	dataFileTxt.close(); //close the ascii file

	return 0;
}

