// This program determines whether the vector contains only even or only odd values or neither.

#include <iostream>
#include <vector>

using namespace std;

bool IsVectorEven(const vector<int> &myVec);
bool IsVectorOdd(const vector<int> &myVec);

int main() {

	int NUM_ELEMENTS;
	cin >> NUM_ELEMENTS;

	vector<int> numbers(NUM_ELEMENTS);

	int values;
	
	for (int i = 0; i < NUM_ELEMENTS; ++i) {
		cin >> values;
		numbers.at(i) = values;
	}

	if (IsVectorEven(numbers) == true) {
		cout << "all even" << endl;
	}
	if (IsVectorOdd(numbers) == true) {
		cout << "all odd" << endl;
	}
	if (IsVectorEven(numbers) == false && IsVectorOdd(numbers) == false) {
		cout << "not even or odd" << endl;
	}

	return 0;
}

bool IsVectorEven(const vector<int> &myVec) {
	bool isEven;
	int i = 0;
	for (int j = 0; j < myVec.size(); ++j) {
		if (myVec.at(j) % 2 != 0) {
			++i;
		}
	}
	if (i > 0) {
		isEven = false;
	}
	if (i == 0) {
		isEven = true;
	}
	return isEven;
}

bool IsVectorOdd(const vector<int> &myVec) {
	bool isOdd;
	int i = 0;
	for (int j = 0; j < myVec.size(); ++j) {
		if (myVec.at(j) % 2 == 0) {
			++i;
		}
	}
	if (i > 0) {
		isOdd = false;
	}
	if (i == 0) {
		isOdd = true;
	}
	return isOdd;
}
