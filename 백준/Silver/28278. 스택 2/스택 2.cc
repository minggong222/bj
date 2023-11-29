#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, x;
    stack<int> a;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        switch (x)
        {
        case 1:
            cin >> x;
            a.push(x);
            break;
        case 2:
            if (a.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << a.top() << '\n';
                a.pop();
            }
            break;
        case 3:
            cout << a.size() << '\n';
            break;
        case 4:
                cout << a.empty() << '\n';
            break;
        case 5:
            if (a.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << a.top() << '\n';
            }
            break;
        }
    }
    return 0;
}