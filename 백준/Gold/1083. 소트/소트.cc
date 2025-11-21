#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main() {
    int arr[50];
    int n, s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> s;
    int cnt = 0;
    while (s > 0) {
        int m = 0;
        int idx = 0;
        for (int i = cnt; i < min(cnt + s + 1, n); i++) {
            if (m < arr[i]) {
                m = arr[i];
                idx = i;
            }
        }
        if (idx == cnt) {
            cnt++;
            continue;
        }
        if (idx == 0)
            break;
        swap(arr[idx], arr[idx - 1]);
        s--;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}