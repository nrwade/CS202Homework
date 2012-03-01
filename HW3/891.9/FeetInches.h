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

	void setFeet (int f){
		feet = f;
	}

	void setInches (int i){
		inches = i;
		simplify();
	}

	int getFeet() const{
		return feet;
	}

	int getInches() const{
		return inches;
	}

	bool operator <= (const FeetInches &);
	bool operator >= (const FeetInches &);
	bool operator != (const FeetInches &);

};

#endif


