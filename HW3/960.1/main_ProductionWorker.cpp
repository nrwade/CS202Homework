/*Nicole Wade
CS202
960.1
1 March 2012 */

/* creates a new instance of a production worker called
newWorker. The function then asks the user for the follwoing 
information about the new worker:
name, employee number, hire date, shift number, pay rate.
Function then displays these values for the user */


#include <iostream>
#include "Employee.h"
#include "ProductionWorker.h"

using std::istream;
using std::ostream;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	// instance of ProductionWorker called newWorker
	ProductionWorker newWorker = ProductionWorker();

	// have user enter employee name
	string employeeName;
	cout << "enter employee name" << endl;
	cin >> employeeName;

	//set employee name
	newWorker.setName(employeeName);

	// have user enter employee number
	int num;
	cout << "enter employee number" << endl;
	cin >> num;

	//set employee number
	newWorker.setEmployeeNum(num);

	//have user enter hire dat
	string date;
	cout << "enter hire date (mm/dd/yyyy)" << endl;
	cin >> date;

	//set hire date
	newWorker.setHireDate(date);
	
	int shift;

	//have user enter shift value
	cout << "enter 1 for day shift and 2 for night shift" << endl;
	cin >> shift;

	//check that user has entered a proper shift value
	// and set shift value
	if (shift == 1)
	{
		newWorker.setShift(shift);
	}

	else if (shift == 2)
	{
		newWorker.setShift(shift);
	}

	else 
	{
		cout << "You must enter a 1 for day shift or a 2 for night shift"
			<< endl;
	}

	//get hourly pay rate from user
	double rate;
	cout << "enter pay rate" << endl;
	cin >> rate;

	newWorker.setPayRate(rate);

	cout << endl << newWorker.getName() << endl;
	cout << newWorker.getEmployeeNum() << endl;
	newWorker.showHireDate(); 
	cout << endl;
	cout << newWorker.getShift() << endl;
	cout << newWorker.getPayRate() << endl;


	return 0;
}