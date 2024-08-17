#include <iostream>
#define ll long long
using namespace std;
int n, m;
int arr[100001];
int tree[400001];
int init(int start, int end, int idx)
{
    if (start == end)
        return tree[idx] = start;
    int mid = (start + end) / 2;
    if (arr[init(start, mid, idx * 2)] <= arr[init(mid + 1, end, idx * 2 + 1)])
    {
        tree[idx] = tree[idx * 2];
    }
    else
    {
        tree[idx] = tree[idx * 2 + 1];
    }
    return tree[idx];
}
void update(int start, int end, int idx, int node)
{
    if (start > node || end < node)
        return;
    if (start == end)
        return;
    int mid = (start + end) / 2;
    update(start, mid, idx * 2, node);
    update(mid + 1, end, idx * 2 + 1, node);
    if(arr[tree[idx*2]] <= arr[tree[idx*2+1]]){
        tree[idx] = tree[idx*2];
    }else{
        tree[idx] = tree[idx*2+1];
    }
    return;
}
int tree_idx(int start, int end, int idx, int left, int right)
{
    if (start > right || end < left)
        return 0;
    if (start >= left && end <= right)
        return tree[idx];
    int mid = (start + end) / 2;
    int a = tree_idx(start, mid, idx * 2, left, right);
    int b = tree_idx(mid + 1, end, idx * 2 + 1, left, right);
    if (arr[a] <= arr[b])
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    arr[0] = 1234567890;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    init(1, n, 1);
    cin >> m;
    for (int i = 0; i < m; i++)
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
            cout << tree_idx(1, n, 1, b, c) << '\n';
        }
    }
    return 0;
}