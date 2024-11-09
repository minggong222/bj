#include <iostream>
#include <queue>
#define ll long long
using namespace std;
int t;
int n;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> t;
    while(t--){
        priority_queue<ll> q;
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            ll a;
            cin >> a;
            q.push(-a);
        }
        ll ans = 0;
        while(q.size() > 1){
            ll a = -q.top();
            q.pop();
            ll b = -q.top();
            q.pop();
            ans += a+b;
            q.push(-(a+b));
        }
        cout << ans << '\n';
    }
    return 0;
}