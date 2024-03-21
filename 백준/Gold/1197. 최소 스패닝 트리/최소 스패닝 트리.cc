#include <iostream>
#include <queue>
#include <vector>
#include <stack>
using namespace std;
int n, m, answer = 0, cnt = 1;
priority_queue<pair<int, pair<int, int>>> q;
int arr[10001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        q.push(make_pair(-c, make_pair(a, b)));
    }
    for (int i = 1; i <= n; i++) arr[i] = i;
    while (!q.empty()) {
        int x = q.top().second.first;
        int y = q.top().second.second;
        int cost = -q.top().first;
        q.pop();
        if (arr[x] == arr[y])   continue;
        answer += cost;
        if (++cnt == n)  break;
        int r = arr[y];
        for (int i = 1; i <= n; i++) {
            if (arr[i] == r)
                arr[i] = arr[x];
        }
    }
    cout << answer;
    return 0;
}