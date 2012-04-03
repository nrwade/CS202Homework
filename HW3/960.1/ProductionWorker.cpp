#include "ProductionWorker.h"

	//constructor
	ProductionWorker::ProductionWorker()
	{
	}

	//mutator for shift value
	void ProductionWorker::setShift(int shift)
	{
		_shift = shift;
	}

	// accessor for shift value
	int ProductionWorker::getShift()
	{
		return _shift;
	}

	// mutator for pay rate
	void ProductionWorker::setPayRate(double payRate)
	{
		_payRate = payRate;
	}

	// accessor for pay rate
	double ProductionWorker::getPayRate()
	{
		return _payRate;
	}