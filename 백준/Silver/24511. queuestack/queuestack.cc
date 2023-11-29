#include <iostream>
#include <string>
#include <list>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    list<int> a;
    vector<bool> b;
    int n, k;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        b.push_back(!k);
    }
    for (int i = 0; i < n; i++) {
        cin >> k;
        if (b[i])
            a.push_back(k);
    }
    int idx = a.size();
    cin >> n;
    for (int j = 0; j < n; j++) {
        cin >> k;
        a.push_front(k);
        cout << a.back() << ' ';
        a.pop_back();
    }
    return 0;
}