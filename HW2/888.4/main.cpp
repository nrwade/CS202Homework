#include <iostream>
using namespace std;

#include "NumDays.h";

int main() {

	NumDays n1 = NumDays(8);
	NumDays n2 = NumDays(2);

	double hours = n1 - n2;

	cout << hours << endl;

	return 0;	
}