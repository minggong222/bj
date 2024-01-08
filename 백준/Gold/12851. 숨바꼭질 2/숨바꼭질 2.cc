#include <iostream>
#include <cstring>
#include <queue>
using namespace std;
int dp[100001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, answer = 0, min = 100000;
    queue<pair<int, int>> q;
    cin >> n >> m;
    q.push(make_pair(n, 0));
    while (!q.empty()) {
        int x = q.front().first;
        int cnt = q.front().second;
        q.pop();
        if (cnt > min)
            break;
        if (x == m) {
            answer++;
            min = cnt;
        }
        if (x * 2 < 100001 && (dp[x * 2] == 0 || dp[x * 2] == cnt + 1)) {
            q.push(make_pair(x * 2, cnt + 1));
            dp[x * 2] = cnt + 1;
        }
        if (x + 1 < 100001 && (dp[x + 1] == 0 || dp[x + 1] == cnt + 1)) {
            q.push(make_pair(x + 1, cnt + 1));
            dp[x + 1] = cnt + 1;
        }
        if (x - 1 >= 0 && (dp[x - 1] == 0 || dp[x - 1] == cnt + 1)) {
            q.push(make_pair(x - 1, cnt + 1));
            dp[x - 1] = cnt + 1;
        }
    }
    cout << min << '\n' << answer;
    return 0;
}