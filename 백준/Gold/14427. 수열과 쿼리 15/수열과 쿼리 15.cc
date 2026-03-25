#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#define ll long long
#define INF 1234567890
using namespace std;
int arr[100001];
int tree[400004];
void init(int start, int end, int idx) {
    if (start == end) {
        tree[idx] = start;
        return;
    }
    int mid = (start + end) / 2;
    init(start, mid, idx * 2);
    init(mid + 1, end, idx * 2 + 1);
    if (arr[tree[idx * 2]] <= arr[tree[idx * 2 + 1]]) {
        tree[idx] = tree[idx * 2];
    }
    else {
        tree[idx] = tree[idx * 2 + 1];
    }
    return;
}
void update(int start, int end, int idx, int node, int value) {
    if (start > node || end < node)  return;
    
    if (start == end) {
        tree[idx] = node;
        return;
    }
    int mid = (start + end) / 2;
    update(start, mid, idx * 2, node, value);
    update(mid + 1, end, idx * 2 + 1, node, value);
    if (arr[tree[idx * 2]] <= arr[tree[idx * 2 + 1]]) {
        tree[idx] = tree[idx * 2];
    }
    else {
        tree[idx] = tree[idx * 2 + 1];
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
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    init(1, n, 1);
    cin >> m;
    for (int i = 0; i < m; i++) {
        int a;
        cin >> a;
        if (a == 1) {
            int x, y;
            cin >> x >> y;
            arr[x] = y;
            update(1, n, 1, x, y);
        }
        else {
            cout << tree[1] << '\n';
        }
    }
    return 0;
}