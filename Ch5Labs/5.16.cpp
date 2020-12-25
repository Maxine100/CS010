// This program takes in user input and outputs it backwards if it isn't "q", "Quit", or "quit".

#include <iostream>
#include <string>

using namespace std;

int main() {
	
	string userInput;
	getline(cin, userInput);

	while ((userInput != "q") && (userInput != "Quit") && (userInput != "quit")) {
		for (int i = userInput.size() - 1; i >= 0; --i) {
			cout << userInput.at(i);
		}
		cout << endl;
		cin >> userInput;
	}

	return 0;
}
