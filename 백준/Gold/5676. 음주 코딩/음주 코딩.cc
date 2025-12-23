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
    tree[idx] = init(start, mid, idx * 2) * init(mid + 1, end, idx * 2 + 1);
    return tree[idx];
}
void update(int start, int end, int idx, int node, int value) {
    if (start > node || end < node)  return;
    if (start == end) {
        arr[start] = value;
        tree[idx] = value;
        return;
    }
    int mid = (start + end) / 2;
    update(start, mid, idx * 2, node, value);
    update(mid + 1, end, idx * 2 + 1, node, value);
    tree[idx] = tree[idx * 2] * tree[idx * 2 + 1];
    return;
}
int find(int start, int end, int idx, int left, int right) {
    if (start > right || end < left) return 1;
    if (start >= left && end <= right)   return tree[idx];
    int mid = (start + end) / 2;
    return find(start, mid, idx * 2, left, right) * find(mid + 1, end, idx * 2 + 1, left, right);
}
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    while (cin >> n >> m) {
        for (int i = 1; i <= n; i++) {
            int a;
            cin >> a;
            if (a > 0)
                arr[i] = 1;
            else if (a < 0)
                arr[i] = -1;
            else
                arr[i] = 0;
        }
        init(1, n, 1);
        string answer = "";
        for (int i = 0; i < m; i++) {
            char a;
            int b, c;
            cin >> a >> b >> c;
            if (a == 'C') {
                if (c > 0)
                    c = 1;
                else if (c < 0)
                    c = -1;
                else
                    c = 0;
                update(1, n, 1, b, c);
            }
            else {
                int ans = find(1, n, 1, b, c);
                if (ans == 0)
                    answer += '0';
                else if (ans > 0)
                    answer += '+';
                else
                    answer += '-';
            }
        }
        cout << answer <<'\n';
    }
    return 0;
}