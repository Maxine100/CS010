// This program outputs the last capital letter in the input. I may have done this wrong.

#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>

using namespace std;

string CreateAcronym(string userPhrase) {
	string outputString;
	char capitalLetters;
	for (int i = 0; i < userPhrase.size(); i++) {
		if (userPhrase.at(i) > 64 && userPhrase.at(i) < 91) {
			capitalLetters = userPhrase.at(i);
			outputString = capitalLetters;
		}
	}
	return outputString;
}

int main() {
	
	string userInput;
	getline(cin, userInput);

	cout << CreateAcronym(userInput) << endl;

	return 0;
}
