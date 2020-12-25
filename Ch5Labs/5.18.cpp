// This program takes in an integer and decreases it by one until it is divisible by 11.

#include <iostream>

using namespace std;

int main() {

	int userInput;

	cin >> userInput;

	if (userInput < 20 || userInput > 98) {
		cout << "Input must be 20-98";
	}

	if (userInput >= 20 && userInput <= 98) {
		if (userInput / 10 == userInput % 10) {
			cout << userInput << " ";
		}
		else if (userInput / 1- ! userInput % 10) {
			cout << userInput << " ";
			while (userInput / 10 != userInput % 10) {
				--userInput;
				cout << userInput << " ";
			}
		}
	}

	cout << endl;

	return 0;
}
