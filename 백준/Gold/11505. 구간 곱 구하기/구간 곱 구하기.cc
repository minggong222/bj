#include <iostream>
#define ll long long
#define MOD 1000000007
using namespace std;
int n, m, k;
ll arr[1000001];
ll tree[4000001];
ll init(int start, int end, int idx)
{
    if (start == end)
    {
        tree[idx] = arr[start];
        return tree[idx];
    }
    int mid = (start + end) / 2;
    tree[idx] = (init(start, mid, idx * 2) * init(mid + 1, end, idx * 2 + 1)) % MOD;
    return tree[idx];
}
ll tree_mul(int start, int end, int idx, int left, int right)
{
    if (start > right || end < left)
        return 1;
    if (start >= left && end <= right)
        return tree[idx];
    int mid = (start + end) / 2;
    return (tree_mul(start, mid, idx * 2, left, right) * tree_mul(mid + 1, end, idx * 2 + 1, left, right)) % MOD;
}
ll update(int start, int end, int idx, int node)
{
    if (node < start || node > end)
        return tree[idx];
    if (start == end)
    {
        tree[idx] = arr[node];
        return tree[idx];
    }
    int mid = (start + end) / 2;
    tree[idx] = (update(start, mid, idx * 2, node) * update(mid + 1, end, idx * 2 + 1, node)) % MOD;
    return tree[idx];
}
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    init(1, n, 1);
    for (int i = 0; i < m + k; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 1)
        {
            arr[b] = c;
            update(1, n, 1, b);
        }
        else
        {
            cout << tree_mul(1, n, 1, b, c) << '\n';
        }
    }
    return 0;
}