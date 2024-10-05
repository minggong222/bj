#include <iostream>
#define ll long long
#define INF 1234567890
using namespace std;
ll arr[100001];
ll tree[1000001];
int n;
ll ans = 0;
int init(int start, int end, int idx)
{
    if (start == end)
    {
        return tree[idx] = start;
    }
    int mid = (start + end) / 2;
    int left_idx = init(start, mid, idx * 2);
    int right_idx = init(mid + 1, end, idx * 2 + 1);
    return tree[idx] = arr[left_idx] < arr[right_idx] ? left_idx : right_idx;
}

int query(int start, int end, int idx, int left, int right)
{
    if (start > right || end < left)
        return INF;
    if (start >= left && end <= right)
        return tree[idx];
    int mid = (start + end) / 2;
    int left_idx = query(start, mid, idx * 2, left, right);
    int right_idx = query(mid + 1, end, idx * 2 + 1, left, right);
    if (left_idx == INF)
        return right_idx;
    if (right_idx == INF)
        return left_idx;
    return arr[left_idx] < arr[right_idx] ? left_idx : right_idx;
}

void solve(int left, int right)
{
    if (right < left)
        return;
    int idx = query(1, n, 1, left, right);
    ans = max(ans, (right - left + 1) * arr[idx]);
    solve(left, idx - 1);
    solve(idx + 1, right);
}

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    init(1, n, 1);
    solve(1, n);
    cout << ans;
    return 0;
}