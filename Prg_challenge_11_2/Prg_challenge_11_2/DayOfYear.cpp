#include "DayOfYear.h"

string const DayOfYear::month[] = { "January", "February", "March", "April",
								"May", "June", "July", "August", "September", "October", "November", "December" };

DayOfYear::DayOfYear(int x)
{
	day = x;
	print();
}

void DayOfYear::print()
{
	if (day > 0 && day < 32)
		cout << month[0] << " " << day;

	else if (day > 31 && day < 60)
		cout << month[1] << " " << day - 31;

	else
	{

		if (day < 366 && day > 334) //display day in dec
			cout << month[11] << " " << day - 334;
		else if (day < 335 && day > 304) //display day in nov
			cout << month[10] << " " << day - 304;
		else if (day < 305 && day > 273) //display day in oct
			cout << month[9] << " " << day - 273;
		else if (day < 274 && day > 243) //display day in sep
			cout << month[8] << " " << day - 243;
		else if (day < 244 && day > 212) //display day in aug
			cout << month[7] << " " << day - 212;
		else if (day < 213 && day > 181) //display day in jul
			cout << month[6] << " " << day - 181;
		else if (day < 182 && day > 151) //display day in jun
			cout << month[5] << " " << day - 151;
		else if (day < 152 && day > 120) //display day in may
			cout << month[4] << " " << day - 120;
		else if (day < 121 && day > 90) //display day in apr
			cout << month[3] << " " << day - 90;
		else if (day < 91 && day > 59) //display day in mar
			cout << month[2] << " " << day - 59;
	}

}