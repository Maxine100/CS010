// This program determines if the inputed year is a leap year.

#include <iostream>

using namespace std;

bool IsLeapYear(int userYear) {
	bool isLeapYear = false;

	if (userYear % 4 == 0) {
		if (userYear % 100 == 0) {
			if (userYear % 400 == 0) {
				isLeapYear = true;
			}
		}
		else if (userYear % 100 != 0) {
			isLeapYear = true;
		}
	}
	return isLeapYear;
}

int main() {

	int userInput;

	cin >> userInput;

	if (IsLeapYear(userInput) == 1) {
		cout << userInput << " is a leap year." << endl;
	}
	else {
		cout << userInput << " is not a leap year." << endl;
	}

	return 0;
}
