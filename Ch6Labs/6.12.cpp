// This program takes in the number of seconds and converts that to jiffies.

#include <iostream>

using namespace std;

double SecondsToJiffies(double userSeconds) {
	double jiffies;
	jiffies = userSeconds * 100;

	cout << jiffies << endl;

	return jiffies;
}

int main() {
	
	int userInput;
	cin >> userInput;
	SecondsToJiffies(userInput);

	return 0;
}
