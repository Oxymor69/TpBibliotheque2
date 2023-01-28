#include <iostream>
#include <string>
using namespace std;
class Date {
private:
	int _month;
	int _day;
	int _year;
	bool isDate(int day, int month, int year);
public:
	Date(int day = 1, int month = 1, int year = 0);
	friend ostream& operator<<(ostream& os, const Date& DateCrea);
};
