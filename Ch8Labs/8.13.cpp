// This program pushes user input onto a vector as long as it is non negative and prints the values at the middle if it is not empty.

#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> vctr;
	int userInput;
	cin >> userInput;

	while (userInput >= 0) {
		vctr.push_back(userInput);
		cin >> userInput;
	}

	if (vctr.size() == 0) {
		cout << "" << endl;
	}
	else if (vctr.size() > 0 && vctr.size() % 2 == 1) {
		cout << vctr.at(vctr.size() / 2) << endl;
	}
	else if (vctr.size() > 0 && vctr.size() % 2 == 0) {
		cout << vctr.at(vctr.size() / 2 - 1) << " " << vctr.at(vctr.size() / 2) << endl;
	}

	return 0;
}
