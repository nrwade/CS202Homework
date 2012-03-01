#include <cstdlib> //for abs
#include "FeetInches.h"

// simplifies the number of feet and inches
void FeetInches::simplify() 
{
	if (inches >= 12)
	{
		feet += (inches / 12);
		inches = inches % 12;
	}

	else if (inches < 0)
	{
		feet -= ((abs(inches) / 12) + 1);
		inches = 12 - (abs(inches) % 12);
	}
}

	// overloaded <= operator compares lengths
	bool FeetInches::operator <= (const FeetInches &right)
	{
		
		bool marker;

		// set marker value
		if (! (feet > right.feet))
		{
			marker = true;
		}

		else if (feet == right.feet && (!(inches > right.inches)))
		{
			marker = true;
		}

		else {
			marker = false;
		}

		return marker;

	}

	// overloaded >= operator compares lengths
	bool FeetInches::operator >= (const FeetInches &right)
	{

		bool marker;

		//set marker value
		if (!(feet < right.feet))
		{
			marker = true;
		}

		else if (feet == right.feet && !(inches < right.inches))
		{
			marker = true;
		}

		else
		{
			marker = false;
		}

		return marker;

	}

	// overloaded != operator compares lengths
	bool FeetInches::operator != (const FeetInches &right)
	{
		bool marker;

		//set marker
		if (!(feet == right.feet && inches == right.inches))
		{
			marker = true;
		}

		else marker = false;

		return marker;
	}
