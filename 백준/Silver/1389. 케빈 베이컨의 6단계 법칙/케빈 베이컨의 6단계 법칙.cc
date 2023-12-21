#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int N, M;
int arr[101][101];
int dp[101][101];
queue<int> q;
int answer;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M;
    for (int i = 1; i <= M; i++) {
        int x, y;
        cin >> x >> y;
        arr[x][y]++;
        arr[y][x]++;
    }

    int min = 10000, idx = 0;
    for (int i = 1; i <= N; i++) {
        q.push(i);
        while (!q.empty()) {
            for (int j = 1; j <= N; j++) {
                if (arr[q.front()][j] && !dp[i][j] && i != j) {
                    dp[i][j] = dp[i][q.front()] + 1;
                    q.push(j);
                }
            }
            q.pop();
        }
        for (int j = 1; j <= N; j++) {
            dp[i][0] += dp[i][j];
        }
        if (dp[i][0] < min) {
            min = dp[i][0];
            idx = i;
        }
    }
    cout << idx;
    return 0;
}