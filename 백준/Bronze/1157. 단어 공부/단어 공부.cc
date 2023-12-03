#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	vector<int> x(26, { 0, });
	string s;
	int max = 0;
	char simbol;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		x[toupper(s[i]) - 'A']++;
	}
	for (int i = 0; i < 26; i++) {
		if (x[i] > max) {
			max = x[i];
			simbol = i + 'A';
		}
	}
	sort(x.begin(), x.end());
	if (x[25] == x[24])
		cout << '?';
	else
		cout << simbol;
	return 0;
}