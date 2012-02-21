#ifndef MONTH_H
#define MONTH_H

#include <string>
using std::string;


class Month {
private:
	std::string name;
	int monthNumber;
public:
	Month();
	Month(int num);
	Month(string& month);

	void setMonth(string& month); 
	void setMonth(int num);

	friend ostream& operator<<(ostream& os, const Month& m);		
	friend istream& operator>>(istream& input, Month& m);

	void operator++();		//pre
	void operator++(int);	//post

	void operator--();
	void operator--(int);
		
	std::string getName();
	int getMonthNumber();
};

#endif