// specification file for filter class
// filter class is an abstract base class

#ifndef FILTER_H
#define FILTER_H

#include <istream>
#include <ostream>
#include <string>
#include <fstream>
#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;


class Filter
{

public:

	//default constructor
	Filter(){};


	void doFilter(ifstream &in, ofstream &out)
	{		
		string toFilter; //to hold our input
		
		
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

			//checking to be sure we haven't reached the end of the file
		} while (!in.eof()) ;

	}

protected:

	// pure virtual function to transform characters
	virtual char transform(char ch) = 0;

};
#endif 