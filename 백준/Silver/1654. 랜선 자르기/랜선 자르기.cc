#include <iostream>
#include <algorithm>
using namespace std;
int arr[10000];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, answer = 0;
    long long sum = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    long long begin = 1, end = sum / m + 1, now = (begin + end) / 2;
    while (1) {
        int a = 0;
        for (int i = 0; i < n; i++) {
            int b = arr[i] / now;
            a += b;
        }
        if (a < m) {
            end = now;
            now = (begin + end) / 2;
        }
        else {
            begin = now;
            now = (begin + end) / 2;
            if (answer == now)
                break;
            answer = now;
        }
    }
    cout << answer;
    return 0;
}