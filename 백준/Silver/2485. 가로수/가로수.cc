#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, x, i, j;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }
    for (i = v[1] - v[0]; i >= 1; i--) {
        for (j = 0; j < n; j++) {
            if ((v[j] - v[0]) % i != 0)
                break;
        }
        if (j == n) {
            cout << (v[n - 1] - v[0]) / i - n + 1;
            break;
        }
    }
}