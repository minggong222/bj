#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define ll long long
#define INF 1234567890
using namespace std;
int n, m;
ll arr[100001];

bool check(ll k) {
    ll cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt += k / arr[i];
        if (cnt >= m) return true;
    }
    return false;
}

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    ll MIN = 0, MAX = 1e18;
    while (MIN + 1 < MAX) {
        ll mid = (MIN + MAX) / 2;
        if (!check(mid)) MIN = mid;
        else MAX = mid;
    }
    cout << MAX;
    return 0;
}