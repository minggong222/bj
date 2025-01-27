#include <iostream>
#define ll long long
using namespace std;
ll tree[400404];
ll arr[100011];
pair<ll, int> lazy[400404];
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
    return;
}
void lazyUpdate(int start, int end, int idx)
{
    if (lazy[idx].first == 0)
        return;
    if (start != end)
    {
        int mid = (start + end) / 2;
        lazy[idx * 2].first += lazy[idx].first;
        lazy[idx * 2].second += lazy[idx].second;
        lazy[idx * 2 + 1].first += lazy[idx].first + (mid - start + 1) * lazy[idx].second;
        lazy[idx * 2 + 1].second += lazy[idx].second;
    }
    else
    {
        tree[idx] += lazy[idx].first;
    }
    lazy[idx] = {0, 0};
}
void update(int start, int end, int idx, int left, int right)
{
    if (start > right || end < left)
        return;
    lazyUpdate(start, end, idx);
    if (start >= left && end <= right)
    {
        lazyUpdate(start, end, idx);
        lazy[idx].first += start - left + 1;
        lazy[idx].second++;
        return;
    }
    int mid = (start + end) / 2;
    update(start, mid, idx * 2, left, right);
    update(mid + 1, end, idx * 2 + 1, left, right);
    return;
}
void find(int start, int end, int idx, int node)
{
    if (node < start || node > end)
        return;
    lazyUpdate(start, end, idx);
    if (start == end)
    {
        cout << tree[idx] << '\n';
        return;
    }
    int mid = (start + end) / 2;
    if (node <= mid)
    {
        find(start, mid, idx * 2, node);
    }
    else
    {
        find(mid + 1, end, idx * 2 + 1, node);
    }
    return;
}
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    init(1, n, 1);
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            int x, y;
            cin >> x >> y;
            update(1, n, 1, x, y);
        }
        else
        {
            int x;
            cin >> x;
            find(1, n, 1, x);
        }
    }
    return 0;
}