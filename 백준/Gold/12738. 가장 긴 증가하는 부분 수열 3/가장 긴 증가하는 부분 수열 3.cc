#include <iostream>
#include <vector>
#define INF 1987654321
#define MAX 1000000
using namespace std;
int n, idx = 0;
int arr[1000001];
int dp[1000001];
int answer[1000001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        dp[i] = INF;
        answer[i] = INF;
    }
    answer[1] = arr[1];
    for (int i = 1; i <= n; i++) {
        int s = 1;
        int e = n;
        int now = 0;
        while (now != (s + e) / 2) {
            now = (s + e) / 2;
            if (dp[now] < arr[i]) {
                s = now;
            }
            else {
                e = now;
            }
        }
        if (dp[now] < arr[i]) {
            if (now + 1 >= idx) {
                dp[now + 1] = arr[i];
                idx = now + 1;
            }
            else {
                dp[now + 1] = arr[i];
            }
        }
        else {
            if (dp[now] == INF)
                idx++;
            dp[now] = arr[i];
        }
    }
    cout << idx << '\n';
    return 0;
}