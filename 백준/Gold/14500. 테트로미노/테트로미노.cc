#include <iostream>

using namespace std;
int n, m, maximum = 0;
int arr[500][500];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i + 2 < n) {
                int a = arr[i][j] + arr[i + 1][j] + arr[i + 2][j];
                if (i + 3 < n) {
                    maximum = max(maximum, a + arr[i + 3][j]);
                }
                if (j - 1 >= 0) {
                    maximum = max(maximum, a + arr[i + 2][j - 1]);
                    maximum = max(maximum, a + arr[i][j - 1]);
                    maximum = max(maximum, a + arr[i + 1][j - 1]);
                }
                if (j + 1 < m) {
                    maximum = max(maximum, a + arr[i + 2][j + 1]);
                    maximum = max(maximum, a + arr[i][j + 1]);
                    maximum = max(maximum, a + arr[i + 1][j + 1]);
                }
            }
            if (j + 2 < m) {
                int a = arr[i][j] + arr[i][j + 1] + arr[i][j + 2];
                if (j + 3 < m) {
                    maximum = max(maximum, a + arr[i][j + 3]);
                }
                if (i - 1 >= 0) {
                    maximum = max(maximum, a + arr[i - 1][j + 2]);
                    maximum = max(maximum, a + arr[i - 1][j]);
                    maximum = max(maximum, a + arr[i - 1][j + 1]);
                }
                if (i + 1 < n) {
                    maximum = max(maximum, a + arr[i + 1][j + 2]);
                    maximum = max(maximum, a + arr[i + 1][j]);
                    maximum = max(maximum, a + arr[i + 1][j + 1]);
                }
            }
            if (i + 1 < n) {
                int a = arr[i][j] + arr[i + 1][j];
                if (j + 1 < m) {
                    maximum = max(maximum, a + arr[i][j + 1] + arr[i + 1][j + 1]);
                    if (i + 2 < n) {
                        maximum = max(maximum, a + arr[i + 1][j + 1] + arr[i + 2][j + 1]);
                    }
                    if (j - 1 >= 0) {
                        maximum = max(maximum, a + arr[i][j + 1] + arr[i + 1][j - 1]);
                        maximum = max(maximum, a + arr[i + 1][j + 1] + arr[i][j - 1]);
                    }
                }
                if (j - 1 >= 0) {
                    if (i + 2 < n) {
                        maximum = max(maximum, a + arr[i + 1][j - 1] + arr[i + 2][j - 1]);
                    }
                }
            }
        }
    }
    cout << maximum;
    return 0;
}