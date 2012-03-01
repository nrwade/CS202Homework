#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	int numberDays[12];
	numberDays[0] = numberDays[2] = numberDays[4] = numberDays[6] = 31;
	numberDays[7] = numberDays[9]= numberDays[11] = 31;
	numberDays[1] = 29;
	numberDays[3] = numberDays[5] = numberDays[8] = numberDays[10] = 30;

	int totalDays1=0;

	for (int i=0; i < date1.month; i++)
	{
		totalDays1 += numberDays[i];
	}

	int totalDays2=0;

	for (int i=0; i < date2.month; i++)
	{
		totalDays2 += numberDays[i];
	}

	int differenceInDays= totalDays1 - totalDays2;

	int differenceInYears = (date1.year - date2.month) * 365

	int totalDifference = differenceInDays + differenceInYears;

	cout << "The between date 1 and date 2 is " << totalDifference << endl;
}