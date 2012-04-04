//specification file for the Capitalize class
//Capitalize is derived from class Filter
#ifndef CAPITALIZE_H
#define CAPITALIZE_H

#include "Filter.h"

class Capitalize : public Filter
{

public:

	//default constructor
	Capitalize() : Filter() {};

	//virtual function to be overriden
	virtual char transform(char ch);

};


#endif CAPITALIZE_H

