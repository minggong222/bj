#include <iostream>
#include <queue>
using namespace std;
int n, m, maximum = 0, cnt = 1, answer = 0;
int parent[100001];
priority_queue<pair<int, pair<int, int>>> pq;

int find(int x) {
    if (parent[x] == x)  return x;
    return parent[x] = find(parent[x]);
}
void makeUnion(int x, int y) {
    x = find(x);
    y = find(y);
    if (x != y)    parent[x] = y;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;  
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        pq.push(make_pair(-c, make_pair(a, b)));
    }
    for (int i = 1; i <= n; i++)   parent[i] = i;
    while (cnt != n) {
        int x = pq.top().second.first;
        int y = pq.top().second.second;
        int cost = -pq.top().first;
        pq.pop();
        if (find(x) == find(y)) continue;
        makeUnion(x, y);
        answer += cost;
        cnt++;
        maximum = max(maximum, cost);
    }
    cout << answer - maximum;
    return 0;
}