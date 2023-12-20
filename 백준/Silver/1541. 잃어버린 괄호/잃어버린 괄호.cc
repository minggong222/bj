#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> num;
    vector<char> symbol;
    string str;
    cin >> str;
    int answer = 0, a = 0, b = 0;
    for (int i = 0; i < str.size(); i++) {
        if (isdigit(str[i]))
            a = 10 * a + (str[i] - '0');
        else {
            num.push_back(a);
            symbol.push_back(str[i]);
            a = 0;
        }
    }
    num.push_back(a);
    a = num.back();
    for (int i = num.size() - 2; i >= 0; i--) {
        if (symbol[i] == '-') {
            answer -= a;
            a = num[i];
        }
        else {
            a += num[i];
        }
    }
    cout << answer + a;
}