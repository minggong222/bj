#include <iostream>
#define ll long long
using namespace std;
int n, m;
int arr[100001];
int tree_m[400001];
int tree_M[400001];
int init_m(int start, int end, int idx)
{
    if (start == end)
    {
        tree_m[idx] = arr[start];
        return tree_m[idx];
    }
    int mid = (start + end) / 2;
    tree_m[idx] = min(init_m(start, mid, idx * 2), init_m(mid + 1, end, idx * 2 + 1));
    return tree_m[idx];
}
int init_M(int start, int end, int idx)
{
    if (start == end)
    {
        tree_M[idx] = arr[start];
        return tree_M[idx];
    }
    int mid = (start + end) / 2;
    tree_M[idx] = max(init_M(start, mid, idx * 2), init_M(mid + 1, end, idx * 2 + 1));
    return tree_M[idx];
}
int tree_max(int start, int end, int idx, int left, int right)
{
    if (start > right || end < left)
        return -1;
    if (start >= left && end <= right)
        return tree_M[idx];
    int mid = (start + end) / 2;
    return max(tree_max(start, mid, idx * 2, left, right), tree_max(mid + 1, end, idx * 2 + 1, left, right));
}
int tree_min(int start, int end, int idx, int left, int right)
{
    if (start > right || end < left)
        return 1000000000;
    if (start >= left && end <= right)
        return tree_m[idx];
    int mid = (start + end) / 2;
    return min(tree_min(start, mid, idx * 2, left, right), tree_min(mid + 1, end, idx * 2 + 1, left, right));
}
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    init_m(1, n, 1);
    init_M(1, n, 1);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << tree_min(1, n, 1, a, b) << ' ' << tree_max(1, n, 1, a, b) << '\n';
    }
    return 0;
}