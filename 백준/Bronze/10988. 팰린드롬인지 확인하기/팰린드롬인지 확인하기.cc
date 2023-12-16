#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main() {
	string s;
	bool a = true;
	cin >> s;
	for (int i = 0; i < s.size() / 2; i++) {
		if (s[i] != s[s.size() - 1 - i]) {
			a = false;
		}
	}
	if (a)
		cout << 1;
	else
		cout << 0;
	return 0;
}