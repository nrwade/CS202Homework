// specification file for filter class
// filter class is an abstract base class

#ifndef FILTER_H
#define FILTER_H
#include <istream>
#include <ostream>
#include <string>

#include <iostream>
using std::cout;
using std::endl;
#include <fstream>

using std::string;
using std::ifstream;
using std::ofstream;


class Filter
{

public:

	//default constructor
	Filter(){};

	//-------should I have another constructor here? what would it take??

	void doFilter(ifstream &in, ofstream &out)
	{		
		string toFilter; //to hold our input
		
		//cout << toFilter << endl;
		//checking to be sure we haven't reached the end of file
		
		do {
			in >> toFilter; //reading from the file

			for (int i = 0; i < toFilter.length(); i++)
			{

				//transform file 1 character at a time
				//savce in c
				
				char c = transform( toFilter[i] );

				//output transformed char to a file	
				out << c;
			}

			//reading the next line from the file
		} while (!in.eof()) ;

	}

protected:

	// pure virtual function to transform characters
	virtual char transform(char ch) = 0;

};
#endif 