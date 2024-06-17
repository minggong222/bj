#include <iostream>
#define ll long long
using namespace std;
int n, k;
ll arr[10001];
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n >> k;
    arr[0] = 1;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        for (int j = x; j <= k; j++) {
            arr[j] += arr[j - x];
        }
    }
    cout << arr[k];
}