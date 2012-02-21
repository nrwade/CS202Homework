#ifndef NUMDAYS_H
#define NUMDAYS_H

class NumDays {
private:
	double hours;
	double days;
	
public:
	NumDays(double hours);

	void setDays(double days);
	void setHours(double hours);
	double getDays();
	double getHours();


	double operator+(NumDays n1);
	double operator-(NumDays n1);

	void operator++();
	void operator--();
	
};

#endif
