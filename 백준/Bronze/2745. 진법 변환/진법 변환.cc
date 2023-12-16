#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    string s = "";
    cin >> s;
    long answer = 0;
    int n = 0, idx = s.size();
    cin >> n;
    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) {
            answer += (s[i] - 'A' + 10) * pow(n, --idx);
        }
        else {
            answer += (s[i] - '0') * pow(n, --idx);
        }
    }
    cout << answer;
	return 0;
}