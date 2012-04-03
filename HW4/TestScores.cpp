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

		if (_scores[i] <= 100 && _scores[i] >= 0 )
		{

			toDivide += _scores[i];

		}

		else {
			throw ErrorMessage();
		}
	}

		return (toDivide / _size);
}