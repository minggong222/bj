#include <iostream>
#include <set>
using namespace std;
int arr[250000];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    set<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string str;
        int x;
        cin >> str;
        if (str == "add") {
            cin >> x;
            s.insert(x);
        }
        else if (str == "remove") {
            cin >> x;
            s.erase(x);
        }
        else if (str == "check") {
            cin >> x;
            if (s.find(x) != s.end()) {
                cout << 1 << '\n';
            }
            else {
                cout << 0 << '\n';
            }
        }
        else if (str == "toggle") {
            cin >> x;
            if (s.find(x) != s.end()) {
                s.erase(x);
            }
            else {
                s.insert(x);
            }
        }
        else if (str == "all") {
            for (int i = 1; i <= 20; i++) {
                s.insert(i);
            }
        }
        else if (str == "empty") {
            s.clear();
        }
    }
    return 0;
}