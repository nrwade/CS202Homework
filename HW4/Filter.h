// specification file for filter class
// filter class is an abstract base class

#ifndef FILTER_H
#define FILTER_H
#include <istream>
#include <ostream>
#include <string>

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

		in >> toFilter; //reading from the file

		//checking to be sure we haven't reached the end of file
		while (!in.eof()) 
		{

			for (int i = 0; i < toFilter.length(); i++)
			{

				//transform file 1 character at a time
				transform( toFilter[i] );

				//output transformed data to a file	
				out << toFilter[i];
			}
		}


	}

protected:

	// pure virtual function to transform characters
	virtual char transform(char ch) = 0;

};
#endif 