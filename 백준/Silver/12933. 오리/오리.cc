#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int answer = 0;
    bool sw = true;
    char duck[5] = {'q', 'u', 'a', 'c', 'k'};
    map<char, int> m;
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++) {
        m[str[i]]++;
    }
    if (!(m['q'] == m['u'] && m['u'] == m['a'] && m['a'] == m['c'] && m['c'] == m['k'] && m['k'] == m['q']))   sw = false;
    while (sw) {
        int j = 0;
        for (int i = 0; i < str.size();) {
            if (str[i] == duck[j % 5]) {
                str.erase(str.begin() + i);
                j++;
            }
            else i++;
        }
        if (j % 5 != 0) {
            sw = false;
            break;
        }
        answer++;
        if (str.empty()) break;
    }
    if (sw)
        cout << answer;
    else
        cout << -1;
    return 0;
}