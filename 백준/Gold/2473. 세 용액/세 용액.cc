#include <iostream>
#include <algorithm>
#define INF 100000000000
#define ll long long
using namespace std;
ll n;
ll arr[5001];
ll x, y, z;
ll m = INF;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> arr[i];
    sort(arr + 1, arr + n + 1);
    for (int i = 1; i <= n - 2; i++) {
        ll j = i + 1, k = n;
        while (j < k) {
            long long sum = arr[i] + arr[j] + arr[k];
            if (abs(sum) < m) {
                m = abs(sum);
                x = arr[i];
                y = arr[j];
                z = arr[k];
            }
            if (sum < 0)  j++;
            else k--;
        }
    }
    cout << x << ' ' << y << ' ' << z;
    return 0;
}