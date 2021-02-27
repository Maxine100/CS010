// This program takes in the number of miles and converts that to the number of laps.

#include <iostream>

using namespace std;

double MilesToLaps(double userMiles) {
	double laps = userMiles * 4;
	return laps;
}

int main() {

	double userMiles;
	cin >> userMiles;
	cout << MilesToLaps(userMiles) << endl;

	return 0;
}
