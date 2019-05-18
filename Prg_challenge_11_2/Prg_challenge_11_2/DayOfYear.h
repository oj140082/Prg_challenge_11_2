#ifndef DAYOFYEAR_H
#define DAYOFYEAR_H

#include <string>
#include <iostream>

using namespace std;

class DayOfYear
{
private:
	int day;
	static const string month[];

public:
	DayOfYear(int);
	void print();
};

#endif