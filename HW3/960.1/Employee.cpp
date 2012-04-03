#include <string>
#include <iostream>
#include "Employee.h"

using std::string;
using std::istream;
using std::ostream;
using std::cin;
using std::cout;

	Employee::Employee(){}; //constructor

	// setter for the employee name
	void Employee::setName(string name)
	{
		_name = name;
	}

	//setter for employee number 
	void Employee::setEmployeeNum (int num)
	{
		_employeeNum = num;
	}

	//setter for hire date
	void Employee::setHireDate (string hireDate)
	{
		_hireDate = hireDate;
	}

	//getter for employee name
	string Employee::getName()
	{
		return _name;
	}

	//getter for employee number
	int Employee::getEmployeeNum()
	{
		return _employeeNum;
	}

	//shows hire date
	void Employee::showHireDate()
	{
		cout << _hireDate;
	}