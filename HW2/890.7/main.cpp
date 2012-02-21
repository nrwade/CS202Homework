#include <iostream> 
#include <string>
using namespace std;

#include "Month.h"

int main() {

	Month m = Month();	

	cout << m << endl;

	cout << ": ";
	cin >> m;
	cout <<  m << endl;
	return 0;
}