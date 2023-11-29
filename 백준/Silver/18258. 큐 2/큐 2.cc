#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    queue<int> a;
    int n, x;
    string str;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str;
        if (str == "push") {
            cin >> x;
            a.push(x);
        }
        else if (str == "pop") {
            if (a.empty())
                cout << -1 << '\n';
            else {
                cout << a.front() << '\n';
                a.pop();
            }
        }
        else if (str == "size") {
            cout << a.size() << '\n';
        }
        else if (str == "empty") {
            cout << a.empty() << '\n';
        }
        else if (str == "front") {
            if (a.empty())
                cout << -1 << '\n';
            else 
                cout << a.front() << '\n';
        }
        else if (str == "back") {
            if (a.empty())
                cout << -1 << '\n';
            else 
                cout << a.back() << '\n';
        }
    }
    return 0;
}