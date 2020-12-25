// This program counts the number of letters and exclamation marks.

#include <iostream>
#include <string>

using namespace std;

int main() {

	int i;
	string userInput;
	int j = 0;

	getline(cin, userInput);

	for (i = 0; i < userInput.size(); ++i) {
		if ((userInput.at(i) >= 'a' && userInput.at(i) <= 'z') || (userInput.at(i) >= 'A' && userInput.at(i) <= 'Z') || (userInput.at(i) == '!')) {
			++j;
		}
	}

	cout << j << endl;

	return 0;
}
