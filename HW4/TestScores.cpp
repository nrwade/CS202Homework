//definition file for class TestScores
#include <iostream>
#include "TestScores.h"
using std::cout;
using std::endl;

double TestScores::avgScores()
{

	double toDivide = 0;

	for (int i = 0; i < _size; i++)
	{

		// error checks while we sum the scores
		if (_scores[i] <= 100 && _scores[i] >= 0 )
		{
			//if value passes error checking, add it to the sum
			toDivide += _scores[i];

		}

		else 
		{
			//throwing the exception
			throw ErrorMessage();
		}
	}
		//return the average
		return (toDivide / _size);
}