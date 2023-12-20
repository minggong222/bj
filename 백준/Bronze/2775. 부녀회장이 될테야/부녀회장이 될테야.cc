#include <iostream>
int arr[15][15];
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < 15; i++)    arr[0][i] = i;
    for (int i = 1; i < 15; i++) {
        for (int j = 1; j < 15; j++) {
            for (int k = 1; k <= j; k++) {
                arr[i][j] += arr[i - 1][k];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        cout << arr[x][y] << '\n';
    }
    return 0;
}