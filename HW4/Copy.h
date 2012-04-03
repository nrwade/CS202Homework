//specification file for copy class 

#ifndef COPY_H
#define COPY_H

#include "Filter.h"

class Copy : public Filter
{

public:
	//constructor
	Copy() : Filter() {};

	virtual char transform(char ch);

};

#endif COPY_H