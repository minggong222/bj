#include<iostream>
#include<queue>
#include<vector>
#include<stack>
#define ll long long
using namespace std;

int n, m;
int arr[100001];
ll tree[400004];
ll answer[100001];
queue<pair<int, int>> query;
priority_queue<pair<int, pair<int, pair<int, int>>>> f;
ll initTree(int start, int end, int idx) {
    if (start == end) {
        return tree[idx] = arr[start];
    }
    int mid = (start + end) / 2;
    return tree[idx] = initTree(start, mid, idx * 2) + initTree(mid + 1, end, idx * 2 + 1);
}
void update(int start, int end, int idx, int node, int value) {
    if (node < start || node > end)  return;
    if (start == end) {
        tree[idx] = value; 
        return;
    }
    tree[idx] += value;
    tree[idx] -= arr[node];
    int mid = (start + end) / 2;
    update(start, mid, idx * 2, node, value);
    update(mid + 1, end, idx * 2 + 1, node, value);
    return;
}
ll find(int start, int end, int idx, int left, int right) {
    if (end < left || start > right) return 0;
    if (start >= left && end <= right)   return tree[idx];
    int mid = (start + end) / 2;
    return find(start, mid, idx * 2, left, right) + find(mid + 1, end, idx * 2 + 1, left, right);
}
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    initTree(1, n, 1);
    int cnt = 0;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int a;
        cin >> a;
        if (a == 1) {
            int b, c;
            cin >> b >> c;
            query.push({ b,c });
        }
        else {
            int b, c, d;
            cin >> b >> c >> d;
            f.push({ -b,{-(cnt++),{c,d}} });
        }
    }
    int size = f.size();
    cnt = 0;
    while (!f.empty()) {
        int c = -f.top().first;
        int idx = -f.top().second.first;
        int left = f.top().second.second.first;
        int right = f.top().second.second.second;
        f.pop();
        while (cnt < c) {
            int node = query.front().first;
            int value = query.front().second;   
            query.pop();
            update(1, n, 1, node, value);
            arr[node] = value;
            cnt++;
        }
        answer[idx] = find(1, n, 1, left, right);
    }
    for (int i = 0; i < size; i++) {
        cout << answer[i] << '\n';
    }
    return 0;
}