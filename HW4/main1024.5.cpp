


#include<iostream>
using std::cout;
using std::cin;
using std::endl;


template <class T>
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
	cout << "I will now add 3 numbers." << endl;
	total(3);

	cout << "I will now add 2.0 numbers." << endl;
	total(2.0);


	return 0;
}