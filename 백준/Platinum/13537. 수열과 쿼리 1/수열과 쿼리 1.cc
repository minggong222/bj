#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define ll long long
#define INF 1234567890
using namespace std;
int arr[100001];
vector<int> tree[400004];
int n, m;
void init(int start, int end, int idx) {
    if (start == end) {
        tree[idx] = { arr[start] };
        return;
    }
    int mid = (start + end) / 2;
    init(start, mid, idx * 2);
    init(mid + 1, end, idx * 2 + 1);

    tree[idx].resize(tree[idx * 2].size() + tree[idx * 2 + 1].size());
    merge(tree[idx * 2].begin(), tree[idx * 2].end(), tree[idx * 2 + 1].begin(), tree[idx * 2 + 1].end(), tree[idx].begin());
    return;
}
int find(int start, int end, int idx, int left, int right, int value) {
    if (start > right || end < left) return 0;
    if (start >= left && end <= right) {
        return tree[idx].end() - upper_bound(tree[idx].begin(), tree[idx].end(), value);
    }
    int mid = (start + end) / 2;
    return find(start, mid, idx * 2, left, right, value) + find(mid + 1, end, idx * 2 + 1, left, right, value);
}
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    init(1, n, 1);
    cin >> m;
    for (int i = 0; i < m; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        cout << find(1, n, 1, x, y, z) << '\n';
    }
    return 0;
}