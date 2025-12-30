#include <iostream>
#include <vector>
#include <map>
#include <queue>
#define ll long long
using namespace std;
int n, b, c;
ll answer = 0;
ll arr[1000001];
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n >> b >> c;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        answer += arr[i];
    }
    if (b <= c) {
        cout << answer * b;
        return 0;
    }
    answer = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i + 1] > arr[i + 2]) {
            ll cnt = min(arr[i], arr[i + 1] - arr[i + 2]);
            answer += (b + c) * cnt;
            arr[i] -= cnt;
            arr[i + 1] -= cnt;

            cnt = min(arr[i], min(arr[i + 1], arr[i + 2]));
            answer += (b + c + c) * cnt;
            arr[i] -= cnt;
            arr[i + 1] -= cnt;
            arr[i + 2] -= cnt;
        }
        else {
            ll cnt = min(arr[i], min(arr[i + 1], arr[i + 2]));
            answer += (b + c + c) * cnt;
            arr[i] -= cnt;
            arr[i + 1] -= cnt;
            arr[i + 2] -= cnt;

            cnt = min(arr[i], arr[i + 1]);
            answer += (b + c) * cnt;
            arr[i] -= cnt;
            arr[i + 1] -= cnt;
        }
        answer += b * arr[i];
        arr[i] = 0;
    }
    cout << answer;
    return 0;
}