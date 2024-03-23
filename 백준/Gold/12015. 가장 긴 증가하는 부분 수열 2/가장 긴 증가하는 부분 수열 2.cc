#include <iostream>
#include <vector>
#define INF 987654321;
using namespace std;
int n, answer = 0;
int arr[1000001];
int D[1000001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        D[i] = INF;
    }
    for (int i = 1; i <= n; i++) {
        int s = 1;
        int e = n;
        int now = 0;
        while ((e + s) / 2 != now) {
            now = (e + s) / 2;
            if (D[now] < arr[i]) {
                s = now;
            }
            else {
                e = now;
            }
        }
        if (D[now] < arr[i]) {
            D[now + 1] = arr[i];
            answer = max(answer, now + 1);
        }
        else {
            D[now] = arr[i];
            answer = max(answer, now);
        }
    }
    cout << answer;
    return 0;
}