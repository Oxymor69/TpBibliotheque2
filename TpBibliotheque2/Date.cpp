#include "Date.h"
#include <iostream>
#include <string>
#include <assert.h>


Date::Date(int day, int month, int year) :  _day(day), _month(month), _year(year) {
	bool status = isDate(day, month, year);
	assert(status && "Date not valid");
}
bool Date::isDate(int day, int month, int year) {
	if ((day < 1) || (day > 31)) return false;
	if ((year > 2022)) return false;
	if ((month < 1) || (month > 12)) return false;
	if ((month == 2) && (day > 28)) return false;
	if (((month == 4) || (month == 6) ||
		(month == 9) || (month == 11)) && (day > 30)) return false;
	return true;
}

std::ostream& operator << (ostream& os, const Date& DateCrea)
{
	os << " mois :" << DateCrea._month << "\n" << " jour :" << DateCrea._day << "\n" << " annee :" << DateCrea._year << "\n";
	return os;
}