// This program removes spaces from user input.

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {

	string userInput1;
	string userInput2;

	getline(cin, userInput1);

	for (unsigned int i = 0; i < userInput1.size(); ++i) {
		if (userInput1.at(i) != ' ') {
			userInput2.push_back(userInput1.at(i));
		}
	}

	cout << userInput2 << endl;

	return 0;
}
