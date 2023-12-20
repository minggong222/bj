#include <iostream>
#include <queue>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    queue<int> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string str;
        int x;
        cin >> str;
        if (str == "push") {
            cin >> x;
            q.push(x);
        }
        else if (str == "pop") {
            if (q.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << q.front() << '\n';
                q.pop();
            }
        }
        else if (str == "size") {
            cout << q.size() << '\n';
        }
        else if (str == "empty") {
            cout << q.empty() << '\n';
        }
        else if (str == "front") {
            if (q.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << q.front() << '\n';
            }
        }
        else if (str == "back") {
            if (q.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << q.back() << '\n';
            }
        }
    }
    return 0;
}