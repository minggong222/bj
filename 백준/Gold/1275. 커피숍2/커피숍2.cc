#include <iostream>
#define ll long long
using namespace std;
ll n, m;
ll arr[100001];
ll tree[500001];
ll init(ll start, ll end, ll idx)
{
    if (start == end)
        return tree[idx] = arr[start];
    ll mid = (start + end) / 2;
    return tree[idx] = init(start, mid, idx * 2) + init(mid + 1, end, idx * 2 + 1);
}
ll find(ll start, ll end, ll idx, ll left, ll right)
{
    if (left <= start && right >= end)
    {
        return tree[idx];
    }
    if (start > right || end < left)
        return 0;
    ll mid = (start + end) / 2;
    return find(start, mid, idx * 2, left, right) + find(mid + 1, end, idx * 2 + 1, left, right);
}
void update(ll start, ll end, ll idx, ll node, ll value)
{
    if (node < start || node > end)
        return;
    tree[idx] -= arr[node];
    tree[idx] += value;
    if (start == end)
        return;
    ll mid = (start + end) / 2;
    update(start, mid, idx * 2, node, value);
    update(mid + 1, end, idx * 2 + 1, node, value);
}
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for (ll i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    init(1, n, 1);
    for (ll i = 0; i < m; i++)
    {
        ll x, y, a, b;
        cin >> x >> y >> a >> b;
        if (x > y)
            swap(x, y);
        cout << find(1, n, 1, x, y) << '\n';
        update(1, n, 1, a, b);
        arr[a] = b;
    }
    return 0;
}