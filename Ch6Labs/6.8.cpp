// This program calculates the driving cost given the amount of miles driven, miles per gallon, and dollars per gallon.

#include <iostream>

using namespace std;

double DrivingCost(double milesDriven, double mpg, double dpg) {
	double total = milesDriven / mpg * dpg;
	return total;
}

int main() {

	double mpg;
	double dpg;

	cin >> mpg >> dpg;

	cout << DrivingCost(10, mpg, dpg) << " ";
	cout << DrivingCost(50, mpg, dpg) << " ";
	cout << DrivingCost(400, mpg, dpg) << endl;

	return 0;
}
