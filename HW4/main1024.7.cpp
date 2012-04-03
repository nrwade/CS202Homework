//Nicole Wade
//CS202
// 3 April 2012
// 1024.7

// This program averages test scores, checking
// that scores are between 0 and 100

#include <iostream>

#include "TestScores.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int size;

	//dynamic array as we don't yet know
	// the number of tests scores 
	double *scoreList = new double[size];

	//get user input for number of test scores
	cout << "How many scores would you like to enter?" << endl;
	cin >> size;

	//get a value for each test score
	for(int i = 0; i < size; i++)
	{
		cout << "Enter a test score:" << endl;
		cin >> scoreList[i];

	}
	
	// make a new instance of TestScores
	TestScores newScores = TestScores (scoreList, size);

	try
	{
		//will give the average of the test scores if an exception is not thrown
		cout << "The average of the scores is " << newScores.avgScores();
		cout << endl;

	}

	catch (TestScores::ErrorMessage)
	{
		//displayed if an exception is thrown
		cout << "Error: You must enter a value between 0 and 100";
		cout << endl;
	}

	return 0;
}
