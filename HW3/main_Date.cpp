/* Nicole Wade
CS202
1 March 2012
890.8 */

/* description */

#include <iostream>
#include "Date.h"

using std::ostream;
using std::istream;
using std::cin;
using std::cout;
using std::endl;

int main(){

Date m = Date();
Date n = Date();


cout << "enter date in form mm/dd/yyyy" << endl;

cin >> m;

cout << "enter a second date in form mm/dd/yyyy" << endl;

cin >> n;

if (!m.getError()) {
cout << "dashed date ";
m.dashedDate(); 
cout << endl << "month first ";
m.monthFirst(); 
cout << endl << "day first ";
m.dayFirst(); 
cout << endl;
}

cout << "add 1 day" << endl;
++m;
m.dayFirst();
cout << endl;

cout << " add another day" << endl;
m++;
m.dayFirst(); 
cout << endl;

cout << "subtract a day" << endl;
--m;
m.dayFirst(); 
cout << endl;

cout << "subtract another day" << endl;
m--;
m.dayFirst(); 
cout << endl;

m-n;



return 0;
}