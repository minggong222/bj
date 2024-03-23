#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
vector<pair<int, int>> X;
vector<pair<int, int>> Y;
vector<pair<int, int>> Z;
vector<pair<int, pair<int, int>>> v;
int p[100001];
int find(int x) {
    if (p[x] == x)   return x;
    return p[x] = find(p[x]);
}
void make_union(int x, int y) {
    x = find(x);
    y = find(y);
    if (x != y)  p[x] = y;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        X.push_back(make_pair(x, i));
        Y.push_back(make_pair(y, i));
        Z.push_back(make_pair(z, i));
        p[i] = i;
    }
    sort(X.begin(), X.end());
    sort(Y.begin(), Y.end());
    sort(Z.begin(), Z.end());
    for (int i = 0; i < n - 1; i++) {
        v.push_back(make_pair(X[i + 1].first - X[i].first, make_pair(X[i].second, X[i + 1].second)));
        v.push_back(make_pair(Y[i + 1].first - Y[i].first, make_pair(Y[i].second, Y[i + 1].second)));
        v.push_back(make_pair(Z[i + 1].first - Z[i].first, make_pair(Z[i].second, Z[i + 1].second)));
    }
    sort(v.begin(), v.end());
    int cnt = 1;
    int answer = 0;
    for (int i = 0; i < v.size(); i++) {
        int a = v[i].second.first;
        int b = v[i].second.second;
        int cost = v[i].first;
        if (find(a) == find(b))  continue;
        make_union(a, b);
        answer += cost;
        if (cnt == n)    break;
    }
    cout << answer;
    return 0;
}