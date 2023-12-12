#include <iostream>
#include <cmath>
using namespace std;
int a[100001], d[100001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int m = -1000;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        d[i] = max(a[i], d[i-1] + a[i]);
        m = max(d[i], m);
    }
    cout << m;
    return 0;
}