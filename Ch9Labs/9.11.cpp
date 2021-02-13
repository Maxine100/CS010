// This program sorts a vector.

#include <iostream>
#include <vector>

using namespace std;

void SortVector(vector<int> &myVec);

int main() {

	int NUM_ELEMENTS;
	cin >> NUM_ELEMENTS;

	vector<int> numbers(NUM_ELEMENTS);

	int values;

	for (int i = 0; i < NUM_ELEMENTS; ++i) {
		cin >> values;
		numbers.at(i) = values;
	}

	SortVector(numbers);

	for (int i = 0; i < NUM_ELEMENTS; ++i) {
		cout << numbers.at(i) << " ";
	}

	cout << endl;

	return 0;
}

void SortVector(vector<int> &myVec) {
	int temp;
	for (int i = 0; i < myVec.size(); ++i) {
		for (int i = 0; i < myVec.size() - 1; ++i) {
			if (myVec.at(i) > myVec.at(i + 1)) {
				temp = myVec.at(i);
				myVec.at(i) = myVec.at(i + 1);
				myVec.at(i + 1) = temp;
			}
		}
	}
	return;
}
