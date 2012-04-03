//specification file for class TestScores
#ifndef TESTSCORES_H
#define TESTSCORES_H

#include <iostream>


class TestScores
{

private:
	double * _scores;
	int _size;

public:
	//Exception class
	class ErrorMessage {};


	//constructor
	// sets _size and _scores using user input
	TestScores(double *scores, int size)
	{
		_size = size; 
		for (int i = 0; i < size; i++)
		{
			_scores[i] = scores[i];
		}
	};

	//average test scores
	double avgScores();

};
#endif TESTSCORES_H