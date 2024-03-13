#include <iostream>
using namespace std;
int n, answer = 0;
int arr[1001];
int dp1[1001];
int dp2[1001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            if (arr[j] < arr[i]) {
                dp1[i] = max(dp1[i], dp1[j] + 1);
            }
        }
    }
    for (int i = n; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            if (arr[j] < arr[i]) {
                dp2[i] = max(dp2[i], dp2[j] + 1);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        answer = max(answer, dp1[i] + dp2[i]);
    }
    cout << answer + 1;
    return 0;
}