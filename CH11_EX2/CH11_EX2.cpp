// CH11_EX2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Brandon Barrett 

#include <iostream>
#include "dateType.h"

using namespace std;

int main()
{
	dateType date1(3, 15, 2008);
	dateType date2(15, 20, 2008);
	dateType date3(2, 30, 2009);
	dateType date4;

	int m, d, y;
	cout << "Date 1: ";
	date1.printDate();
	if (date1.isLeapYear()) {
		cout << endl << "this is a leap year";
	}
	else {
		cout << endl << "this is not a leap year";
	}
	cout << endl;
	cout << "Date 2: ";
	date2.printDate();
	if (date2.isLeapYear()) {
		cout << endl << "this is a leap year";
	}
	else {
		cout << endl << "this is not a leap year";
	}
	cout << endl;
	cout << "Date 3: ";
	date3.printDate();
	if (date3.isLeapYear()) {
		cout << endl << "this is a leap year";
	}
	else {
		cout << endl << "this is not a leap year";
	}
	cout << endl;
	cout << "Enter month day year: ";
	cin >> m >> d >> y;
	cout << endl;
	date4.setDate(m, d, y);
	cout << "Date 4: ";
	date4.printDate();
	if (date4.isLeapYear()) {
		cout << endl << "this is a leap year";
	}
	else {
		cout << endl << "this is not a leap year";
	}
	cout << endl;
	return 0;
}


