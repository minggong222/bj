#include <iostream>
#include <map>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<int, int>m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        m[x]++;
    }
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (m.find(x) != m.end())
            cout << 1 << '\n';
        else
            cout << 0 << '\n';
    }
    return 0;
}