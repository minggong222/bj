#include <iostream>
using namespace std;
int arr[700][700];
int a[3];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = 1;
        }
    }
    while (m--) {
        cin >> a[0] >> a[1] >> a[2];
        for (int i = n-1; i > 0; i--) {
            if (a[2]) {
                a[2]--;
                arr[0][i] += 2;
            }
            else if (a[1]) {
                a[1]--;
                arr[0][i] += 1;
            }
        }
        for (int i = 0; i < n; i++) {
            if (a[2]) {
                a[2]--;
                arr[i][0] += 2;
            }
            else if (a[1]) {
                a[1]--;
                arr[i][0] += 1;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i][0] << ' ';
        for (int j = 1; j < n; j++) {
            cout << arr[0][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}