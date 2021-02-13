// This program takes the minimum value from a vector and subtracts all values in the vector  from that value.

#include <iostream>
#include <vector>

using namespace std;

int GetMinimumInt(vector<int> listInts);

int main() {

	vector<int> list;
	int numVals;
	int integer;

	cin >> numVals;

	for (int i = 0; i < numVals; ++i) {
		cin >> integer;
		list.push_back(integer);
	}

	int min = GetMinimumInt(list);

	for (int k = 0; k < list.size(); ++k) {
		list.at(k) = list.at(k) - min;
		cout << list.at(k) << " ";
	}

	cout << endl;

	return 0;
}

int GetMinimumInt(vector<int> listInts) {
	int minimum = listInts.at(0);
	for (int j = 0; j < listInts.size(); ++j) {
		if (listInts.at(j) < minimum) {
			minimum = listInts.at(j);
		}
	}
	return minimum;
}
