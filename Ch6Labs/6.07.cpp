// This program outputs the value with the greatest magnitude.

#include <iostream>
#include <cmath>

using namespace std;

int MaxMagnitude(int num1, int num2) {
	int output;

	if (fabs(num1) > fabs(num2)) {
		output = num1;
	}
	if (fabs(num2) > fabs(num1)) {
		output = num2;
	}
	return output;
}

int main() {

	int userInput1;
	int userInput2;

	cin >> userInput1 >> userInput2;

	cout << MaxMagnitude(userInput1, userInput2) << endl;

	return 0;
}
