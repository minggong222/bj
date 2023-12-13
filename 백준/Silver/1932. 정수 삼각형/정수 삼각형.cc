#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, x;
    vector<vector<int>> v;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        vector<int> a;
        for (int j = 0; j < i; j++) {
            cin >> x;
            a.push_back(x);
        }
        v.push_back(a);
    }
    for (int i = 1; i < n; i++) {
        v[i][0] += v[i - 1][0];
        v[i][i] += v[i - 1][i - 1];
        for (int j = 1; j < i; j++) {
            v[i][j] = max(v[i - 1][j - 1] + v[i][j], v[i - 1][j] + v[i][j]);
        }
    }
    sort(v[n - 1].begin(), v[n - 1].end());
    cout << v[n - 1][n - 1];
    return 0;
}