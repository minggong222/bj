#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int s = 0;
    cin >> s;
    string answer = "";
    int n = 0, idx = 0;
    cin >> n;
    while (s > 0) {
        if (s % n >= 10) {
            answer = (char)((s % n) + 'A' - 10) + answer;
        }
        else {
            answer = (char)(s % n + 48) + answer;
        }
        s = s / n;
    }
    cout << answer;
	return 0;
}