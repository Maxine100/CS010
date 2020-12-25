// This program determines te largest and smallest of three inputed integers.

#include <iostream>

using namespace std;

int LargestNumber(int num1, int num2, int num3) {
	int largestNumber;
	if (num1 > num2 && num1 > num3) {
		largestNumber = num1;
	}
	if (num2 > num1 && num2 > num3) {
		largestNumber = num2;
	}
	if (num3 > num1 && num3 > num2) {
		largestNumber = num3;
	}
	return largestNumber;
}

int SmallestNumber(int num1, int num2, int num3) {
	int smallestNumber;
	if (num1 < num2 && num1 < num3) {
		smallestNumber = num1;
	}
	if (num2 < num1 && num2 < num3) {
		smallestNumber = num2;
	}
	if (num2 < num1 && num3 < num2) {
		smallestNumber = num3;
	}
	return smallestNumber;
}

int main() {
	
	int num1;
	int num2;
	int num3;

	cin >> num1 >> num2 >> num3;

	cout << "largest: " << LargestNumber(num1, num2, num3) << endl;
	cout << "smallest: " << SmallestNumber(num1, num2, num3) << endl;

	return 0;
}
