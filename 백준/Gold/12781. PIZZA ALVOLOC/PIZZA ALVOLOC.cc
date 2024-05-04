#include <iostream>
#define ll long long
using namespace std;
pair<ll, ll> p[4];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for (int i = 0; i < 4; i++) {
        ll x, y;
        cin >> x >> y;
        p[i] = { x,y };
    }
    ll a = (p[1].first - p[0].first) * (p[2].second - p[0].second) - (p[2].first - p[0].first) * (p[1].second - p[0].second);
    ll b = (p[1].first - p[0].first) * (p[3].second - p[0].second) - (p[3].first - p[0].first) * (p[1].second - p[0].second);
    if (a * b < 0)
        cout << 1;
    else
        cout << 0;
    return 0;
}