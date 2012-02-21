#include <iostream>
#include <cmath>
using std::abs;
using std::cout;
using std::cin;
using std::endl;

#include "NumDays.h";

int main() {

	double hours1;
	double hours2;
	cout << "Enter a number of hours for worker 1: ";
	cin >> hours1;
	cout << endl;

	cout << "Enter a number of hours for worker 2: ";
	cin >> hours2;
 	cout << endl;
 		
	NumDays n1 = NumDays(hours1);
	NumDays n2 = NumDays(hours2);


	cout << "The combined number of hours of both workers: " << n1+n2 << endl;
	cout << "The difference in the number of hours of both workers: " << std::abs(n1-n2) << endl; 	

	cout << "The number of days of worker 1: " << n1.getDays() << endl;
	cout << "The number of days of worker 2: " << n2.getDays() << endl;

	cout << "Incrementing worker 1 once" << endl;

	n1++;

	cout << "The number of hours of worker 1: " << n1.getHours() << endl;
	cout << "The number of days of worker 1: " << n1.getDays() << endl;

	cout << "Incrementing worker 2 twice" << endl;

	n2++;
	n2++;

	cout << "The number of hours of worker 2: " << n2.getHours() << endl;
	cout << "The number of days of worker 2: " << n2.getDays() << endl;
		

	cout << "Decrementing worker 1 four times" << endl;

	n1--;
	n1--;
	n1--;
	n1--;

	cout << "The number of hours of worker 1: " << n1.getHours() << endl;
	cout << "The number of days of worker 1: " << n1.getDays() << endl;

	cout << "Decrementing worker 2 twice" << endl;
	
	n2--;
	n2--;

	cout << "The number of hours of worker 2: " << n2.getHours() << endl;
	cout << "The number of days of worker 2: " << n2.getDays() << endl;


	return 0;	
}