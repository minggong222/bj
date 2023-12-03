#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main() {
	string s;
	while (true) {
		getline(cin, s, '\n');
		if (s == "") break;
		cout << s << endl;
	}
	return 0;
}