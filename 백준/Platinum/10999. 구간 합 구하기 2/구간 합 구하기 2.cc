#include <iostream>
#define ll long long
using namespace std;
ll tree[4000404];
ll arr[1000011];
ll lazy[4000404];
void lazyUpdate(int start, int end, int idx)
{
    if (lazy[idx] == 0)
        return;
    tree[idx] += lazy[idx] * (end - start + 1);
    if (start != end)
    {
        lazy[idx * 2] += lazy[idx];
        lazy[idx * 2 + 1] += lazy[idx];
    }
    lazy[idx] = 0;
    return;
}
void init(int start, int end, int idx)
{
    if (start == end)
    {
        tree[idx] = arr[start];
        return;
    }
    int mid = (start + end) / 2;
    init(start, mid, idx * 2);
    init(mid + 1, end, idx * 2 + 1);
    tree[idx] = tree[idx * 2] + tree[idx * 2 + 1];
}
void update(int start, int end, int idx, int left, int right, ll value)
{
    lazyUpdate(start, end, idx);
    if (start > right || end < left)
        return;
    if (start >= left && end <= right)
    {
        lazy[idx] += value;
        lazyUpdate(start, end, idx);
        return;
    }
    int mid = (start + end) / 2;
    update(start, mid, idx * 2, left, right, value);
    update(mid + 1, end, idx * 2 + 1, left, right, value);
    tree[idx] = tree[idx * 2] + tree[idx * 2 + 1];
    return;
}
ll find(int start, int end, int idx, int left, int right)
{
    lazyUpdate(start, end, idx);
    if (start > right || end < left)
    {
        return 0;
    }
    if (start >= left && end <= right)
    {
        return tree[idx];
    }
    int mid = (start + end) / 2;
    ll lV = find(start, mid, idx * 2, left, right);
    ll rV = find(mid + 1, end, idx * 2 + 1, left, right);
    return lV + rV;
}
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    init(1, n, 1);
    for (int i = 0; i < m + k; i++)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            int x, y;
            ll z;
            cin >> x >> y >> z;
            update(1, n, 1, x, y, z);
        }
        else
        {
            int x, y;
            cin >> x >> y;
            cout << find(1, n, 1, x, y) << '\n';
        }
    }
    return 0;
}