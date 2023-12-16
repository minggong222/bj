#include <iostream>
using namespace std;
int num[100001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, maximum = -100000000;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        num[i] = num[i - 1] + x;
    }
    for (int i = 0; i + m <= n; i++) {
        maximum = max(num[i + m] - num[i], maximum);
    }
    cout << maximum;
    return 0;
}