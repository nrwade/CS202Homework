/* Nicole Wade
CS202
1 March 2012
890.8 */

/* Takes two dates from the user and displays
first date in three formats. Adds two days to first date
then subtracts two days from first date. Finds the difference
between the two date in number of years. */

#include <iostream>
#include "Date.h"

using std::ostream;
using std::istream;
using std::cin;
using std::cout;
using std::endl;

int main(){

//two instances of the class Date
Date m = Date();
Date n = Date();

//get user input for classes using overloaded >>
cout << "enter date in form mm/dd/yyyy" << endl;

cin >> m;

cout << "enter a second date in form mm/dd/yyyy" << endl;

cin >> n;

// error checking
if (!m.getError()) {

cout << "dashed date ";
// mm/dd/yyy
m.dashedDate(); 

cout << endl << "month first ";
// month dd, yyy
m.monthFirst(); 

cout << endl << "day first ";
// dd month yyy
m.dayFirst(); 
cout << endl;

//add a day to the date using overloaded ++ 
//and display date
cout << "add 1 day" << endl;
++m;
m.dayFirst();
cout << endl;

//add a day to the date using overloaded ++
//and display date
cout << " add another day" << endl;
m++;
m.dayFirst(); 
cout << endl;

//subtract a day from the date using overloaded --
//and display date
cout << "subtract a day" << endl;
--m;
m.dayFirst(); 
cout << endl;

//subtract a day from the date using overloaded --
//and display date
cout << "subtract another day" << endl;
m--;
m.dayFirst(); 
cout << endl;

//find the number of days between the two dates 
// using overloaded -
m-n;
}



return 0;
}