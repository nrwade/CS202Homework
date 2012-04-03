//specification file for the Capitalize class
#ifndef CAPITALIZE_H
#define CAPITALIZE_H

#include "Filter.h"

class Capitalize : public Filter
{

public:

	//default constructor
	Capitalize() : Filter() {};

	virtual char transform(char ch);

};


#endif CAPITALIZE_H

