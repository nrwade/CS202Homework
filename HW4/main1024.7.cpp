//main to test TestScores

#include <iostream>

#include "TestScores.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int size;

	double *scoreList = new double[size];

	cout << "How many scores would you like to enter?" << endl;
	cin >> size;

	for(int i = 0; i < size; i++)
	{
		cout << "Enter a test score:" << endl;
		cin >> scoreList[i];

	}
	

	TestScores newScores = TestScores (scoreList, size);

	try
	{
		
		cout << "The average of the scores is " << newScores.avgScores();
		cout << endl;

	}

	catch (TestScores::ErrorMessage)
	{
		cout << "Error: You must enter a value between 0 and 100";
		cout << endl;
	}

	return 0;
}
