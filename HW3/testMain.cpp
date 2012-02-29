#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	string date="12/03/1985";
	string dayString= date.substr(3,2);
	cout << "this is the string"<<dayString<<endl;
	int day = atoi(dayString.c_str());
	cout<< "this is the int"<<day<<endl;
}