#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main() {
    int n, answer = 0;
    int arr[1001];
    int dp[1001];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            if (dp[j] <= arr[i]) {
                dp[j] = arr[i];
                answer = max(answer, j);
                break;
            }
        }
    }
    cout << answer + 1;
    return 0;
}