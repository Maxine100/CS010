// This program flips a coin for a specified number of times.

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

string HeadsOrTails() {
	string side;
	if (rand() % 2 == 0) {
		side = "heads";
	}
	else {
		side = "tails";
	}
	return side;
}

int main() {

	srand(2);
	int numberOfDecisions;

	cin >> numberOfDecisions;

	for (int i = 0; i < numberOfDecisions; ++i) {
		cout << HeadsOrTails() << endl;
	}

	return 0;
}
