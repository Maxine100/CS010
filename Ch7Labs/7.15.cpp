// This program converts an integer ot binary and reverses it.

#include <iostream>
#include <string>

using namespace std;

string IntegerToBinary(int num1) {
	while (num1 > 0) {
		cout << num1 % 2;
		num1 = num1 / 2;
	}
	cout << endl;
	return "";
}

void ReverseString(string &userString) {
	for (int i = userString.size() - 1; i >= 0; --i) {
		cout << userString.at(i);
	}
	cout << endl;
}

int main() {

	int userInput;
	cin >> userInput;
	string str;

	str = IntegerToBinary(userInput);

	ReverseString(str);

	return 0;
}
