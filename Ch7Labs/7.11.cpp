// This program counts the occurence of a certain character in a string.

#include <iostream>

using namespace std;

int CountCharacters(char userChar, string userString) {
	int matches = 0;
	for (int i = 0; i < userString.size(); ++i) {
		if (userChar == userString.at(i)) {
			++matches;
		}
	}
	return matches;
}

int main() {

	char letter;
	string str;

	cin >> letter >> str;

	cout << CountCharacters(letter, str) << endl;

	return 0;
}
