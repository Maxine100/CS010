#include <iostream>

using namespace std;

int main() {

	int trunkWidth;
	int trunkHeight;
	int leavesWidth;
	int leavesHeight;

	cout << "Enter trunk height: ";
	cin >> trunkHeight;

	cout << "Enter trunk width: ";
	cin >> trunkWidth;

	while (trunkWidth % 2 == 0) {
		cout << "Please enter an odd number for the width: ";
		cin >> trunkWidth;
	}

	cout << "Enter leaves width: ";
	cin >> leavesWidth;

	while(leavesWidth % 2 == 0) {
		cout << "Please enter an odd number for the width: ";
		cin >> leavesWidth;
	}

	leavesHeight = leavesWidth / 2 + 1;

	cout << endl;

	for (int i = 1; i <= leavesHeight; ++i) {
		for (int j = leavesHeight; j > i; --j) {
			cout << " ";
		}
		for (int k = 0; k < i; ++k) {
			cout << "*";
		}
		for (int l = 1; l < i; ++l) {
			cout << "*";
		}
		cout << endl;
	}

	for (int g = 0; g < trunkHeight; ++g) {
		for (int f = 1; f <= (leavesWidth - trunkWidth) / 2; ++f) {
			cout << " ";
		}
		for (int h = 0; h < trunkWidth; ++h) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
