// This program reads two integers. It outputs the first, then the first plus 10. Error message if the first is greater than the second.

#include <iostream>

using namespace std;

int main() {

	int i;
	int num1;
	int num2;

	cin >> num1 >> num2;

	if (num1 <= num2) {
		for (i = num1; i <= num2; i = i + 10) {
			cout << i << " ";
		}
	}
	else if (num1 >= num2) {
		cout << "Second integer can't be less than the first.";
	}
	
	cout << endl;

	return 0;
}
