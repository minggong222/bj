#include <iostream>

using namespace std;
int arr[100001];
int answer[2];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    int i = 1, j = n, min = 2000000000;
    while (i < j) {
        int now = arr[i] + arr[j];
        if (min > abs(now)) {
            min = abs(now);
            answer[0] = arr[i];
            answer[1] = arr[j];
            if (now == 0) {
                break;
            }
        }
        if (now < 0) {
            i++;
        }
        else {
            j--;
        }
    }
    cout << answer[0] << ' ' << answer[1];
    return 0;
}