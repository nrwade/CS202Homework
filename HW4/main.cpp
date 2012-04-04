//Nicole Wade
//CS202
// 3 April 2012
//963-9

// This program encrypts a file,
// capitalizes all characters in a file,
// and copies a file

#include <iostream>
#include <fstream>
using std::cout;
using std::endl;


#include "Encryption.h"
#include "Filter.h"
#include "Capitalize.h"
#include "Copy.h"

int main()
{	
//-----------------Encryption------------	

	//make a new instance of encryption
	Encryption newEncryption = Encryption(5);

	// create a new ifstream object
	ifstream inputEFile;
	// open input file
	inputEFile.open("forEncryption.txt");

	//create a new ofstream object for encryption
	ofstream outputEFile;
	//open output file
	outputEFile.open("outputEncryption.txt");

	//run the encryption
	newEncryption.doFilter(inputEFile, outputEFile);

	//close input and output files
	inputEFile.close();
	outputEFile.close();

//-------------Capitalization----------------

	//make a new instance of capitalize
	Capitalize newCapitalize = Capitalize();

	// create a new ifstream object
	ifstream inputCFile;
	// open input file
	inputCFile.open("forCapitalization.txt");

	//create a new ofstream object for capitalization
	ofstream outputCFile;
	//open output file
	outputCFile.open("outputCapitalize.txt");	

	//run the capitalization
	newCapitalize.doFilter(inputCFile, outputCFile);

	inputCFile.close();
	outputCFile.close();


//-------------Copy----------------

	//make a new instance of capitalize
	Copy newCopy = Copy();

	// create a new ifstream object
	ifstream inputCopFile;
	// open input file
	inputCopFile.open("forCopy.txt");

	//create a new ofstream object for capitalization
	ofstream outputCopFile;
	//open output file
	outputCopFile.open("outputCopy.txt");	

	//run the capitalization
	newCopy.doFilter(inputCopFile, outputCopFile);

	inputCopFile.close();
	outputCopFile.close();	

	return 0;
}