#include <iostream> 
#include <string>
using namespace std;

#include "Month.h"

int main() {

	Month m = Month();	

	cout << m;

	cout << "Enter a month number (1-12): ";
	cin >> m;
	cout <<  m << endl;

	cout << "Look at these fun months!" << endl;
	m.setMonth(3);
	cout << m;

	string n = "feBrUary";
	m.setMonth(n);
	cout << m;

	string n2 = "AUGUST";
	m.setMonth(n2);
	cout << m;

	string n3 = "july";
	m.setMonth(n3);

	cout << m;

	m++;
	cout << m;

	++m;
	cout << m;

	--m;
	cout << m;
	m--;
	cout << m;

	for (int i=1; i<=12; i++) {
		m.setMonth(i);
		cout << m;
	}
	
	return 0;
}