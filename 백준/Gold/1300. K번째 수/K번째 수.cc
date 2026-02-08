#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#define ll long long
#define INF 1234567890
using namespace std;
ll n, k;
map<int, int> m;

ll count(ll x) {
    ll cnt = 0;
    for (int i = 1; i <= n; i++) {
        cnt += min(x / i, n);
    }
    return cnt;
}

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n >> k;
    ll MIN = 1, MAX = n * n;
    while (MIN <= MAX) {
        ll mid = (MIN + MAX) / 2;
        ll x = count(mid);
        if (x < k) MIN = mid + 1;
        else MAX = mid - 1;
    }
    cout << MIN;
    return 0;
}