#include <iostream>
#include <vector>
using namespace std;
int a[3];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<vector<pair<int, int>>> v;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        vector<pair<int, int>> v2;
        for (int j = 0; j < n; j++) {
            v2.push_back(make_pair(0,1));
        }
        v.push_back(v2);
    }
    while (m--) {
        cin >> a[0] >> a[1] >> a[2];
        for (int i = n - 1; i >= 0; i--) {
            if (a[0]) {
                a[0]--;
                v[i][0].first = v[i][0].second;
            }
            else if (a[1]) {
                v[i][0].first = v[i][0].second;
                v[i][0].second++;
                a[1]--;
            }
            else{
                v[i][0].first = v[i][0].second;
                v[i][0].second += 2;
                a[2]--;
            }
        }
        for (int i = 1; i < n; i++) {
            if (a[0]) {
                a[0]--;
                v[0][i].first = v[0][i].second;
            }
            else if (a[1]) {
                v[0][i].first = v[0][i].second;
                v[0][i].second++;
                a[1]--;
            }
            else {
                v[0][i].first = v[0][i].second;
                v[0][i].second += 2;
                a[2]--;
            }
        }
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < n; j++) {
                v[i][j].first = v[i][j].second;
                v[i][j].second += max(v[i][j - 1].second - v[i][j - 1].first, max(v[i - 1][j - 1].second - v[i - 1][j - 1].first, v[i - 1][j].second - v[i - 1][j].first));
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << v[i][j].second << ' ';
        }
        cout << '\n';
    }
    return 0;
}