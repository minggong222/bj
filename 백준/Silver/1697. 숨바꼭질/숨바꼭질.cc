#include <iostream>
#include <set>
#include <queue>
using namespace std;
int N, M;
bool visit[100001];
queue<pair<int, int>> q;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M;
    visit[N] = true;
    q.push(make_pair(N, 0));
    while (!q.empty()) {
        if (q.front().first == M)
            break;
        int x = q.front().first;
        int idx = q.front().second;
        if (x + 1 < 100001 && !visit[x + 1]) {
            visit[x + 1] = true;
            q.push(make_pair(x + 1, idx + 1));
        }
        if (x - 1 >= 0 && !visit[x - 1]) {
            visit[x - 1] = true;
            q.push(make_pair(x - 1, idx + 1));
        }
        if (2 * x < 100001 && !visit[2 * x]) {
            visit[2 * x] = true;
            q.push(make_pair(2 * x, idx + 1));
        }
        q.pop();
    }
    cout << q.front().second;
    return 0;
}