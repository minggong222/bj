#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main() {
	int n = 0, answer = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		map<int, int> m;
		string str = "";
		cin >> str;
		bool b = true;
		for (int j = 0; j < str.size(); j++) {
			char c = str[j];
			if (m[c] != 0){ b = false; break;
			}else {
				while (j < str.size() && str[j] == c) {
					m[c]++;
					j++;
				}
			}
			j--;
		}
		if(b)	answer++;
	}
	cout << answer;
	return 0;
}