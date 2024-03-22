#include <iostream>
using namespace std;
int p[500001];
int n, m;
int find(int x) {
    if (p[x] == x)   return x;
    return p[x] = find(p[x]);
}
void make_union(int x, int y) {
    x = find(x);
    y = find(y);
    if (x != y)    p[x] = y;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    bool sw = false;
    cin >> n >> m;
    for (int i = 0; i < n; i++) p[i] = i;
    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        if (find(x) == find(y)) {
            cout << i;
            sw = true;
            break;
        }
        make_union(x, y);
    }
    if (!sw)
        cout << 0;
    return 0;
}