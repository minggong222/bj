#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main() {
	int a = 0, b = 0;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] - 'A' + 1 <= 15)
			a += (s[i] - 'A') / 3 + 3;
		else if (s[i] - 'A' + 1 <= 19)
			a += 8;
		else if (s[i] - 'A' + 1 <= 22)
			a += 9;
		else
			a += 10;
	}
	cout << a;
	return 0;
}