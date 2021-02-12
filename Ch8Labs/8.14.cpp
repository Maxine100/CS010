// This program populates a vector then outputs values less than or equal to a user inputed threshold.

#include <iostream>
#include <vector>

using namespace std;

void GetUserValues(vector<int> &userValues);
void OutputIntsLessThanOrEqualToThreshold(vector<int> userValues, int upperThreshold);

int main() {

	vector<int> list;
	int upperThreshold;

	GetUserValues(list);

	cin >> upperThreshold;
	OutputIntsLessThanOrEqualToThreshold(list, upperThreshold);

	cout << endl;

	return 0;

}

void GetUserValues(vector<int> &userValues) {
	int userInput;
	int numvals;
	cin >> numvals;
	
	for (int i = 0; i < numvals; ++i) {
		cin >> userInput;
		userValues.push_back(userInput);
	}
}

void OutputIntsLessThanOrEqualToThreshold(vector<int> userValues, int upperThreshold) {
	for (int j = 0; j < userValues.size(); ++j) {
		if(userValues.at(j) <= upperThreshold) {
			cout << userValues.at(j) << " ";
		}
	}
}
