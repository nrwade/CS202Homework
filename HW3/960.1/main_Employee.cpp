#include <iostream>
#include <string>
#include "Employee.h"

using std::istream;
using std::ostream;
using std::cin;
using std::cout;
using std::endl;
using std::string;

//tests the employee class
int main()
{
	Employee newEmployee = Employee(); //constructor

	newEmployee.setName("Marie");
	newEmployee.setEmployeeNum(3);
	newEmployee.setHireDate("03/04/2012");

	cout << "New Employee" << endl;
	cout << "name: " << newEmployee.getName() << endl;
	cout << "number: " << newEmployee.getEmployeeNum() << endl;
	cout << "hire date: " << endl;
	newEmployee.showHireDate();
	cout << endl;
}