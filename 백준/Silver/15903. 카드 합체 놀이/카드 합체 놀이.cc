#include <iostream>
#include <queue>
#define ll long long
using namespace std;
priority_queue<ll> q;
ll n, m, ans = 0;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        q.push(-x);
    }
    for (int i = 0; i < m; i++)
    {
        ll a = q.top();
        q.pop();
        ll b = q.top();
        q.pop();
        q.push(a + b);
        q.push(a + b);
    }

    while(!q.empty()){
        ans += q.top();
        q.pop();
    }
    cout << -ans;
    return 0;
}