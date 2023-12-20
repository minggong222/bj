#include <iostream>
using namespace std;
int arr[1400];
int a[3];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    while (m--) {
        cin >> a[0] >> a[1] >> a[2];
        for (int i = a[0]; i < a[0] + a[1]; i++) {
            arr[i]++;
        }
        for (int i = a[0] + a[1]; i < a[0] + a[1] + a[2]; i++) {
            arr[i] += 2;
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] + 1 << ' ';
        for (int j = n; j <= 2 * (n - 1); j++) {
            cout << arr[j] + 1 << ' ';
        }
        cout << '\n';
    }
    return 0;
}