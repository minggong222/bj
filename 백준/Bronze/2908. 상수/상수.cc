#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main() {
	int a = 0, b = 0;
	string s;
	cin >> s;
	for (int i = s.size()-1; i >= 0; i--) {
		a = a * 10 + (s[i] - 48);
	}
	cin >> s;
	for (int i = s.size() - 1; i >= 0; i--) {
		b = b * 10 + (s[i] - 48);
	}
	if (a < b)
		a = b;
	cout << a;
	return 0;
}