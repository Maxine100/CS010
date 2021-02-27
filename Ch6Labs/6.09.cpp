// This program converts steps to miles.

#include <iostream>

using namespace std;

double StepsToMiles(int userSteps) {
	double userMiles = static_cast<double>(userSteps) / 2000;
	cout << userMiles << endl;

	return userMiles;
}

int main() {

	int userInput;
	cin >> userInput;

	StepsToMiles(userInput);

	return 0;
}
