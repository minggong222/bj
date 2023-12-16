#include <iostream>
#include <vector>
using namespace std;
long long cnt[1001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    long long sum = 0, answer = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        sum += x;
        cnt[sum % m]++;
    }
    for (int i = 0; i <= 1000; i++) {
        answer += cnt[i] * (cnt[i] - 1) / 2;
    }
    cout << answer + cnt[0];
    return 0;
}