#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int arr[3][100001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        memset(arr, 0, sizeof(arr));
        for (int j = 0; j < n; j++) {
            cin >> arr[1][j];
        }
        for (int j = 0; j < n; j++) {
            cin >> arr[2][j];
        }
        for (int j = 1; j < n; j++) {
            arr[0][j] += max(arr[1][j - 1], arr[2][j - 1]);
            arr[1][j] += max(arr[0][j - 1], arr[2][j - 1]);
            arr[2][j] += max(arr[0][j - 1], arr[1][j - 1]);
        }
        cout << max(max(arr[0][n - 1], arr[1][n - 1]), arr[2][n - 1]) << '\n';
    }
    return 0;
}