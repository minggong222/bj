#include <iostream>
#include <vector>
#define INF 1987654321
using namespace std;
int n, len, idx = 0, index = 0;
int arr[1001];
int dp[1001];
vector<int> answer;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        len = 0;
        for (int j = 0; j < i; j++) {
            if (arr[j] < arr[i])
                len = max(dp[j], len);
        }
        dp[i] = len + 1;
        if (idx < len + 1) {
            idx = len + 1;
            index = i;
        }
    }
    for (int i = index; i > 0; i--) {
        if (dp[i] == idx) {
            answer.push_back(arr[i]);
            idx--;
        }
    }
    int size = answer.size();
    cout << size << '\n';
    for (int i = size - 1; i >= 0; i--)
        cout << answer[i] << ' ';
    return 0;
}