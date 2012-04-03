/* Nicole Wade
CS202
1 March 2012
891.9 */

/*takes two instances of class FeetInches, containing
feet and inches and compares them using overloaded
operators. Creates a third instance of FeetInches that
is identical to the first and displays it*/

#include <iostream>
#include "FeetInches.h"

using std::istream;
using std::ostream;
using std::cin;
using std::cout;
using std::endl;

int main(){

	//create two instances of FeetInches
	FeetInches first = FeetInches();
	FeetInches second = FeetInches();

	//set feet and inches values for the first FeetInches class
	first.setFeet(3);
	first.setInches(2);

	//set feet and inches for the second FeetInches class
	second.setFeet(4);
	second.setInches(0);

	// test the overloaded <= operator
	if (first <= second)
	{
		cout << "first is less than or equal to the second" << endl;
	}

	// test the overloaded >= operator
	if (first >= second)
	{
		cout << "first is greater than or equal to second" << endl;
	}

	// test the overloaded != operator
	if (first != second)
	{
		cout << "the first is not equal to the second" << endl;
	}

	// create a third instance of class FeetInches
	// to be identical to the first instance
	FeetInches third = first;

	// display feet and inches of third instance to show it is
	// identical to the first instance
	cout << third.getFeet() << "feet " << third.getInches() << "inches" << endl;

	return 0;
}