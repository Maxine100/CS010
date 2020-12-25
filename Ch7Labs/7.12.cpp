// This program removes spaces from a string.

#include <iostream>

using namespace std;

string RemoveSpaces(string userString) {
	string userInput1;

	for (unsigned i = 0; i < userString.size(); ++i) {
		if (userString.at(i) != ' ') {
			userInput1. push_back(userString.at(i));
		}
	}
	return userInput1;
}

int main() {

	string userInput;
	getline(cin, userInput);

	cout << RemoveSpaces(userInput) << endl;

	return 0;
}
