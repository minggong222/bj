#include <iostream>

using namespace std;
int n, m;
int T[51];
int party[51][51];
int p[51];
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
    cin >> n >> m;
    for (int i = 1; i <= n; i++) p[i] = i;
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++) {
        cin >> T[i];
    }
    int x, y;
    for (int i = 1; i <= m; i++) {
        cin >> party[i][0] >> party[i][1];
        for (int j = 2; j <= party[i][0]; j++) {
            cin >> party[i][j];
            if (find(party[i][j - 1]) == find(party[i][j]))  continue;
            make_union(party[i][j - 1], party[i][j]);
        }
    }
    int answer = m;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= party[i][0]; j++) {
            bool sw = false;
            for (int k = 1; k <= a; k++) {
                if (find(party[i][j]) == find(T[k])) {
                    answer--;
                    sw = true;
                    break;
                }
            }
            if (sw)  break;
        }
    }
    cout << answer;
    return 0;
}