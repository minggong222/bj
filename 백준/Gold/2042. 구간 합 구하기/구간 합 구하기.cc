#include <iostream>
#define ll long long
using namespace std;
ll arr[1000000];
ll tree[5000001];
int n, m, k;
ll init(int start, int end, int idx)
{
    if (start == end)
    {
        tree[idx] = arr[start];
        return tree[idx];
    }
    else
    {
        int mid = (start + end) / 2;
        tree[idx] = init(start, mid, idx * 2) + init(mid + 1, end, idx * 2 + 1);
        return tree[idx];
    }
}
void update(int start, int end, int idx, int node, ll value)
{
    if (node < start || node > end)
        return;
    tree[idx] -= arr[node];
    tree[idx] += value;
    if (start == end)
        return;
    int mid = (start + end) / 2;
    update(start, mid, idx * 2, node, value);
    update(mid + 1, end, idx * 2 + 1, node, value);
}
ll tree_sum(int start, int end, int idx, int left, int right)
{
    if (start > right || end < left)
        return 0;
    if (start >= left && end <= right)
        return tree[idx];
    int mid = (start + end) / 2;
    return tree_sum(start, mid, idx * 2, left, right) + tree_sum(mid + 1, end, idx * 2 + 1, left, right);
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
        int a, b;
        ll c;
        cin >> a >> b >> c;
        switch (a)
        {
        case 1:
            update(1, n, 1, b, c);
            arr[b] = c;
            break;
        case 2:
            cout << tree_sum(1, n, 1, b, c) << '\n';
            break;
        }
    }
    return 0;
}