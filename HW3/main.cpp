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


cout << "enter date in form dd/mm/yyyy" << endl;

cin >> m;

return 0;
}