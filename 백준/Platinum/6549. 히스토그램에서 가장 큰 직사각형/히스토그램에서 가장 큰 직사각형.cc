#include <iostream>
#define ll long long
using namespace std;
#define INF 1234567890
ll n;
ll tree[1000001];
ll ans = 0;
ll arr[100001];
int init(int start, int end, int idx)
{
    if (start == end)
        return tree[idx] = start;
    int mid = (start + end) / 2;
    int left_idx = init(start, mid, idx * 2);
    int right_idx = init(mid + 1, end, idx * 2 + 1);
    return tree[idx] = arr[left_idx] < arr[right_idx] ? left_idx : right_idx;
}
int query(int start, int end, int idx, int left, int right)
{
    if (end < left || start > right)
        return INF;
    if (left <= start && right >= end)
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
    if (left > right)
        return;
    int idx = query(1, n, 1, left, right);

    ans = max(ans, arr[idx] * (right - left + 1));
    solve(left, idx - 1);
    solve(idx + 1, right);
}

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    while (1)
    {
        ans = 0;
        cin >> n;
        if (n == 0)
            break;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        init(1, n, 1);
        solve(1, n);
        cout << ans << '\n';
    }
    return 0;
}