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

	first.setFeet(5);
	first.setInches(0);

	second.setFeet(4);
	second.setInches(10);

	if (first <= second)
	{
		cout << "first is less than or equal to second" << endl;
	}
	else if (second <= first)
	{
		cout << "second is less than or equal to first" << endl;
	}

	/*first.setFeet(5);
	first.setInches(0);

	second.setFeet(4);
	second.setInches(10);

	if (first >= second)
	{
		cout << "first is greater than or equal to second" << endl;
	}
	else if (second >= first)
	{
		cout << "second is greater than or equal to first" << endl;
	}*/

	return 0;
}