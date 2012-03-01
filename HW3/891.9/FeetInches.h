#ifndef FEETINCHES_H
#define FEETINCHES_H

#include <iostream>
using std::ostream;
using std::istream;
using std::cin;
using std::cout;

class FeetInches
{
private:
	int feet;
	int inches;
	void simplify();

public:
	//constructor
	FeetInches(int f = 0, int i = 0)
	{
		feet = f;
		inches = i;
		simplify();
	}	

	//copy constructor
	FeetInches(const FeetInches &newLength)
	{
		feet = newLength.feet;
		inches = newLength.inches;
		simplify();
	}

	//setter for feet
	void setFeet (int f){
		feet = f;
	}

	//setter for inches
	void setInches (int i){
		inches = i;
		simplify();
	}

	//getter for feet
	int getFeet() const{
		return feet;
	}

	//getter for inches
	int getInches() const{
		return inches;
	}

	//overloaded operators
	bool operator <= (const FeetInches &);
	bool operator >= (const FeetInches &);
	bool operator != (const FeetInches &);

};

#endif


