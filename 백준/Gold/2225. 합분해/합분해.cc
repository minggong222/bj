#include <iostream>
#define ll long long
using namespace std;
int n, k;
ll arr[201][201];
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n >> k;
    arr[0][0] = 1;
    for (int i = 1; i <= k; i++) {
        for (int j = 0; j <= n; j++) {
            for (int k = 0; k <= j; k++) {
                arr[j][i] += arr[j - k][i - 1];
                arr[j][i] %= 1000000000;
            }
        }
    }
    cout << arr[n][k];
}