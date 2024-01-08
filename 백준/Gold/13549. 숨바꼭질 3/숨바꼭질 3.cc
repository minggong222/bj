#include <iostream>
#include <cstring>
#include <deque>
using namespace std;
int dp[100001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    deque<pair<int, int>> q;
    cin >> n >> m;
    q.push_back(make_pair(n, 0));
    memset(dp, 1, sizeof(dp));
    while (!q.empty()) {
        int x = q.front().first;
        int cnt = q.front().second;
        q.pop_front();
        if (x == m) {
            cout << cnt;
            break;
        }
            if (x * 2 < 100001 && dp[x * 2] > cnt) {
            q.push_front(make_pair(x * 2, cnt));
            dp[x * 2] = cnt;
        }
        if (x + 1 < 100001 && dp[x + 1] > cnt + 1) {
            q.push_back(make_pair(x + 1, cnt + 1));
            dp[x + 1] = cnt + 1;
        }
        if (x - 1 >= 0 && dp[x - 1] > cnt + 1) {
            q.push_back(make_pair(x - 1, cnt + 1));
            dp[x - 1] = cnt + 1;
        }
    }
    return 0;
}