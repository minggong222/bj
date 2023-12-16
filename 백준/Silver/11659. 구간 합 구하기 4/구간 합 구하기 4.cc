#include <iostream>
using namespace std;
int num[100001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        num[i] = num[i - 1] + x;
    }
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        cout << num[y] - num[x-1] << '\n';
    }
    return 0;
}