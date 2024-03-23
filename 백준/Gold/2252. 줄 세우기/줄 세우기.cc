#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int n, m;
int arr[32001];
vector<int> v[32001];
vector<int> answer;
void bfs(int x) {
    queue<int> q;
    q.push(x);
    while (!q.empty()) {
        int a = q.front();
        q.pop();
        arr[a]--;
        answer.push_back(a);
        for (int i = 0; i < v[a].size(); i++) {
            if (!(--arr[v[a][i]]))
                q.push(v[a][i]);
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        arr[b]++;
    }
    for (int i = 1; i <= n; i++) {
        if (!arr[i]) {
            bfs(i);
        }
    }
    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i] << ' ';
    }
    return 0;
}