#include <iostream>
#include <vector>
#define INF 987654321
using namespace std;
int n, idx = 1, cnt = 0;
int arr[500001];
int dp[500001];
int ans[500001];
vector<int> answer;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x, y;
        cin >> x;
        cin >> arr[x];
        dp[i] = INF;
    }
    for (int i = 1; i < 500001; i++) {
        if (!arr[i]) continue;
        cnt++;
        int s = 1;
        int e = n;
        int now = 0;
        int num = arr[i];
        while (now != (s + e) / 2) {
            now = (s + e) / 2;
            if (dp[now] < num) {
                s = now + 1;
            }
            else {
                e = now;
            }
        }
        idx = max(idx, now);
        dp[now] = num;
        ans[i] = now;
        if (cnt == n)    break;
    }
    cout << n - idx << '\n';
    for (int i = 500000; i > 0; i--) {
        if (!arr[i]) continue;
        if (ans[i] == idx) {
            idx--;
            continue;
        }
        answer.push_back(i);
    }
    for (int i = answer.size() - 1; i >= 0; i--)
        cout << answer[i] << '\n';
    return 0;
}