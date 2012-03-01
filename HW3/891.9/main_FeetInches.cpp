/* Nicole Wade
CS202
1 March 2012
891.9 */

#include <iostream>
#include "FeetInches.h"

using std::istream;
using std::ostream;
using std::cin;
using std::cout;
using std::endl;

int main(){

	FeetInches first = FeetInches();
	FeetInches second = FeetInches();

	first.setFeet(3);
	first.setInches(2);

	second.setFeet(4);
	second.setInches(0);


	if (first <= second)
	{
		cout << "first is less than or equal to the second" << endl;
	}

	if (first >= second)
	{
		cout << "first is greater than or equal to second" << endl;
	}

	if (first != second)
	{
		cout << "the first is not equal to the second" << endl;
	}

	return 0;
}