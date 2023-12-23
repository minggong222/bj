#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, answer = 0;
    string str, s = "I";
    cin >> n >> m;
    cin >> str;
    for (int i = 0; i < n; i++) {
        s += "OI";
    }
    while (str.find(s) != string::npos) {
        answer++;
        size_t idx = str.find(s);
        while (1) {
            if (str[idx + 2 * n + 1] == 'O' && str[idx + 2 * n + 2] == 'I') {
                idx += 2;
                answer++;
            }
            else {
                str = str.substr(idx + 2 * n + 1, m);
                break;
            }
        }
    }
    cout << answer;
    return 0;
}