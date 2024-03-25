#include <iostream>
#include <vector>
#define INF 1987654321
#define MAX 1000000
using namespace std;
int n, idx = 1, index = 1;
int arr[1000001];
int dp[1000001];
int answer[1000001];
vector<int> ans;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        dp[i] = INF;
    }
    dp[1] = arr[1];
    answer[1] = 1;
    for (int i = 2; i <= n; i++) {
        int s = 1;
        int e = i;
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
            dp[now + 1] = arr[i];
            answer[i] = now + 1;
        }
        else {
            dp[now] = arr[i];
            answer[i] = now;
        }
        if (idx <= answer[i]) {
            idx = answer[i];
            index = i;
        }
    }
    for (int i = index; i > 0; i--) {
        if (answer[i] == idx) {
            idx--;
            ans.push_back(arr[i]);
        }
    }
    int size = ans.size();
    cout << size << '\n';
    for (int i = size - 1; i >= 0; i--)
        cout << ans[i] << ' ';
    return 0;
}