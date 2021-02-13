// This program determines te largest and smallest of three inputed integers.

#include <iostream>

using namespace std;

int LargestNumber(int num1, int num2, int num3) {
	int largestNumber = num1;
	if (num2 > largestNumber) {
		largestNumber = num2;
	}
	if (num3 > largestNumber) {
		largestNumber = num3;
	}
	return largestNumber;
}

int SmallestNumber(int num1, int num2, int num3) {
	int smallestNumber = num1;
	if (num2 < smallestNumber) {
		smallestNumber = num2;
	}
	if (num3 < smallestNumber) {
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
