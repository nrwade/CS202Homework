#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using std::string;

class Employee {

private:
	string _name;
	int _employeeNum;
	string _hireDate;

public:
	Employee(); //constructor

	void setName(string name);

	void setEmployeeNum (int num);

	void setHireDate (string hireDate);

	string getName();

	int getEmployeeNum();

	void showHireDate();

};
#endif