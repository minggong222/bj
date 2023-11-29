#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string s;
        bool sw = true;
        stack<char> a;
        cin >> s;
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == '(') a.push(s[j]);
            else if (a.empty()) {
                sw = false;
                break;
            }
            else {
                a.pop();
            }
        }
        if(a.empty() && sw) cout << "YES\n";
        else    cout << "NO\n";
    }
    return 0;
}