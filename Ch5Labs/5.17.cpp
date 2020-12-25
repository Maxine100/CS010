// This program determines if user input is a digit or not.

#include <iostream>
#include <cctype>

using namespace std;

int main() {

	int i;
	string userInput;
	bool digit = true;

	cin >> userInput;

	for (i = 0; i < userInput.size(); ++i) {
		if (!isdigit(userInput.at(i))) {
			digit = false;
		}
	}

	if (digit) {
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}

	return 0;
}
