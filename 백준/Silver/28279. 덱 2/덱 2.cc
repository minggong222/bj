#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    list<int> a;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        switch (x)
        {
        case 1:
            cin >> x;
            a.push_front(x);
            break;
        case 2:
            cin >> x;
            a.push_back(x);
            break;
        case 3:
            if (a.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << a.front() << '\n';
                a.pop_front();
            }
            break;
        case 4:
            if (a.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << a.back() << '\n';
                a.pop_back();
            }
            break;
        case 5:
            cout << a.size() << '\n';
            break;
        case 6:
            cout << a.empty() << '\n';
            break;
        case 7:
            if (a.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << a.front() << '\n';
            }
            break;
        case 8:
            if (a.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << a.back() << '\n';
            }
            break;
        }
    }
    return 0;
}