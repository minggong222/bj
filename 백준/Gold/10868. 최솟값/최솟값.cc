#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int n, m;
int arr[18][100001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> arr[0][i];
    }
    for (int i = 1; pow(2, i) <= n; i++) {
        for (int j = 1;; j++) {
            int idx = j + pow(2, i - 1);
            if (idx > n) break;
            arr[i][j] = min(arr[i - 1][j], arr[i - 1][idx]);
        }
    }
    for (int i = 0; i < m; i++) {
        int a, b, j = 0;
        cin >> a >> b;
        int idx = b - a + 1;
        while (idx >= pow(2, j))
            j++;
        j--;
        idx = idx - pow(2, j) + a;
        cout << min(arr[j][a], arr[j][idx]) << '\n';
    }
    return 0;
}