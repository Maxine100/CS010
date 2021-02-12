// This program finds the number associated with a name.

#include <iostream>
#include <vector>

using namespace std;

string GetPhoneNumber(const vector<string> &nameVec, const vector<string> & phoneNumberVec, string contactName);

int main() {

	int NUM_ELEMENTS;
	cin >> NUM_ELEMENTS;

	string userNames;
	string userNumbers;

	vector<string> names(NUM_ELEMENTS);
	vector<string> phoneNumbers(NUM_ELEMENTS);

	for (int i = 0; i < NUM_ELEMENTS; ++i) {
		cin >> userNames;
		names.at(i) = userNames;
		cin >> userNumbers;
		phoneNumbers.at(i) = userNumbers;
	}

	string contactName;
	cin >> contactName;

	cout << GetPhoneNumber(names, phoneNumbers, contactName) << endl;

	return 0;
}

string GetPhoneNumber(const vector<string> &nameVec, const vector<string> &phoneNumberVec, string contactName) {
	string output;
	for (int i = 0; i < nameVec.size(); ++i) {
		if (contactName == nameVec.at(i)) {
			output = phoneNumberVec.at(i);
		}
	}
	return output;
}
