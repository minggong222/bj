#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int sparse[200001][20];
int n, m, MAX = 0;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> sparse[i][0];
    }
    int dif = n;
    for (int idx = 1; idx <= 19; idx++) {
        for (int i = 1; i <= n; i++) {
            sparse[i][idx] = sparse[sparse[i][idx - 1]][idx - 1];
        }
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        int a, b, idx = 0;
        cin >> a >> b;
        while (a >= 1) {
            if (a % 2 == 1) {
                b = sparse[b][idx];
            }
            a = a >> 1;
            idx++;
        }
        cout << b << '\n';
    }
    return 0;
}