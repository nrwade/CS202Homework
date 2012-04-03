#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include "Employee.h"

class ProductionWorker : public Employee
{
private:
	int _shift;
	double _payRate;

public:
	//constructor
	ProductionWorker();

	void setShift(int shift);

	int getShift();

	void setPayRate(double payRate);
	
	double getPayRate();

};
#endif