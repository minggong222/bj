#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int answer[1001] = { 1 };
bool sw[1001];
vector<vector<int> > v(1001);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, x, y;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        v[y].push_back(x);
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (find(v[j].begin(), v[j].end(), i) != v[j].end())
                answer[j] = max((answer[i] + 1), answer[j]);
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << ++answer[i] << ' ';
    }
    return 0;

}