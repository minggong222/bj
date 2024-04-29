#include <iostream>
#include <set>
using namespace std;
int n, m;
string arr[1000];
int pa[1000000];
set<int> s;
int find(int x) {
    if (pa[x] == x) return x;
    return pa[x] = find(pa[x]);
}
void Union(int x, int y) {
    x = find(x);
    y = find(y);
    if (x != y)
        pa[x] = y;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int p = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            pa[i * m + j] = i * m + j;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int idx = i * m + j;
            switch (arr[i][j])
            {
            case 'U':
                if (find(idx) != find((i - 1) * m + j)) {
                    Union(idx, (i - 1) * m + j);
                }
                break;
            case 'D':
                if (find(idx) != find((i + 1) * m + j)) {
                    Union(idx, (i + 1) * m + j);
                }
                break;
            case 'L':
                if (find(idx) != find(i * m + j - 1)) {
                    Union(idx, i * m + j - 1);
                }
                break;
            case 'R':
                if (find(idx) != find(i * m + j + 1)) {
                    Union(idx, i * m + j + 1);
                }
                break;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            s.insert(find(i * m + j));
        }
    }
    cout << s.size();
    return 0;
}