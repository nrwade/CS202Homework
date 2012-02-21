#ifndef MONTH_H
#define MONTH_H

#include <string>
using std::string;


class Month {

	private:

		std::string name;
		int monthNumber;

	public:

		// default constructor
		Month();

		// constructor that takes number
		Month(int num);

		//constructor that takes string
		Month(string& month);

		// setter for month string
		void setMonth(string& month); 

		// setter for month number
		void setMonth(int num);

		// overloads << operator
		friend ostream& operator<<(ostream& os, const Month& m);
		
		// overloads >> operator		
		friend istream& operator>>(istream& input, Month& m);

		// overloads ++ operator
		void operator++();		//pre
		void operator++(int);	//post

		// overloads -- operator
		void operator--();		//pre
		void operator--(int);	//post
		
		//returns month name
		string getName();

		// returns month number
		int getMonthNumber();
};

#endif