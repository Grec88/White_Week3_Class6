//============================================================================
// Name        : Week3_Class6.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

class ReversibleString {
private:
	string str;
public:
	ReversibleString() {
	}
	;

	ReversibleString(const string &new_str) {
		str = new_str;
	}

	void Reverse() {
		string reversed_str = "";
		for (size_t i = str.size(); i > 0; i--) {
			reversed_str.push_back(str[i - 1]);
		}
		str = reversed_str;
	}

	string ToString() const {
		return str;
	}
};

int main() {
	ReversibleString s("live");
	s.Reverse();
	cout << s.ToString() << endl;

	s.Reverse();
	const ReversibleString &s_ref = s;
	string tmp = s_ref.ToString();
	cout << tmp << endl;

	ReversibleString empty;
	cout << '"' << empty.ToString() << '"' << endl;

	return 0;
}
