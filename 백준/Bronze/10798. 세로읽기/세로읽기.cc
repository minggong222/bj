#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>
using namespace std;

int main() {
    vector<string> s;
    string answer = "";
    for (int i = 0; i < 5; i++) {
        string input;
        cin >> input;
        s.push_back(input);
    }
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 5; j++) {
            if (s[j].size() > i) answer += s[j][i];
        }
    }
    cout << answer;
	return 0;
}