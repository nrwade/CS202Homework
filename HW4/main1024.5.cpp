// Nicole Wade
// CS202
// 3 April 2012
// 1024.5

// This program uses a template called total and
// keeps a running total of integers that the user has entered

// The program is demonstrated using an integer and a double


#include<iostream>
using std::cout;
using std::cin;
using std::endl;

//the template
template <class T>

//function total keeps a running total of ints
//the user has input and then displays their total
T total(T number)
{
	int toAdd;
	int total = 0;

	for(int i = 0; i < number; i++)
	{
		cout << "Please enter an int:";
		cin >> toAdd;
		cout << endl;

		total += toAdd;
	}

	cout << "The total is " << total << endl;
}

int main()
{
	//demonstrating the function with an int
	cout << "I will now add 3 numbers." << endl;
	total(3);

	//demonstrating the function with a double
	cout << "I will now add 2.0 numbers." << endl;
	total(2.0);


	return 0;
}