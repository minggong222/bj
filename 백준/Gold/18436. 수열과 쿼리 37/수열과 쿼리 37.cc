#include <iostream>
#include <vector>
#include <map>
#include <queue>
#define ll long long
using namespace std;
int n, m;
int arr[100001];
ll tree[400004];
int init(int start, int end, int idx) {
    if (start == end) {
        tree[idx] = arr[start];
        return tree[idx];
    }
    int mid = (start + end) / 2;
    tree[idx] = init(start, mid, idx * 2) + init(mid + 1, end, idx * 2 + 1);
    return tree[idx];
}
void update(int start, int end, int idx, int node, int value) {
    if (start > node || end < node)  return;
    if (start == end) {
        arr[node] = value;
        tree[idx] = value;
        return;
    }
    int mid = (start + end) / 2;
    tree[idx] -= arr[node];
    tree[idx] += value;
    update(start, mid, idx * 2, node, value);
    update(mid + 1, end, idx * 2 + 1, node, value);
}
ll find(int start, int end, int idx, int left, int right) {
    if (start > right || end < left) return 0;
    if (start >= left && end <= right) return tree[idx];
    int mid = (start + end) / 2;
    return find(start, mid, idx * 2, left, right) + find(mid + 1, end, idx * 2 + 1, left, right);
}
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        arr[i] = (a + 1) % 2;
    }
    init(1, n, 1);
    cin >> m;
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 1) {
            update(1, n, 1, b, (c + 1) % 2);
        }
        else if(a == 2){
            cout << find(1, n, 1, b, c) << '\n';
        }
        else {
            cout << c - b + 1 - find(1, n, 1, b, c) << '\n';
        }
    }
    return 0;
}