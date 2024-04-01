#include <iostream>
#include <map>
#define pii pair<long long, long long>
using namespace std;
pair<pii, pii> l[3001];
int p[3001];
int n, answer = 0;
map<int, int> m;
int ccw(pii p1, pii p2, pii p3) {
    long long s = p1.first * p2.second + p2.first * p3.second + p3.first * p1.second;
    s -= p2.first * p1.second + p3.first * p2.second + p1.first * p3.second;
    if (s > 0)   return 1;
    else if (s == 0) return 0;
    else    return -1;
}

bool func(pair<pii, pii> l1, pair<pii, pii> l2) {
    pii p1 = l1.first;
    pii p2 = l1.second;
    pii p3 = l2.first;
    pii p4 = l2.second;
    int p1p2 = ccw(p1, p2, p3) * ccw(p1, p2, p4);
    int p3p4 = ccw(p3, p4, p1) * ccw(p3, p4, p2);
    if (p1p2 == 0 && p3p4 == 0) {
        if (p1 > p2) swap(p2, p1);
        if (p3 > p4) swap(p3, p4);

        return p3 <= p2 && p1 <= p4;
    }
    return p1p2 <= 0 && p3p4 <= 0;
}
int find(int x) {
    if (p[x] == x)    return x;
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
        int x, y, z, w;
        cin >> x >> y >> z >> w;
        l[i] = { { x,y }, {z,w} };
        p[i] = i;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j)  continue;
            if (!func(l[i], l[j]))   continue;
            make_union(i, j);
        }
    }
    for (int i = 1; i <= n; i++) {
        int idx = find(i);
        m[idx]++;
        answer = max(answer, m[idx]);
    }
    cout << m.size() << '\n' << answer;
    return 0;
}