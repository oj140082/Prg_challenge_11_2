#include <iostream>
#include "DayOfYear.h"

using namespace std;

int main()
{
	int day;

	while (1 > 0)
	{

		cout << "Enter a day of the year (a value between 1-365): ";
		cin >> day;
		cout << "The day " << day << " is ";

		DayOfYear d(day);

		cout << endl;

	}


	system("pause");
	return 0;
}
