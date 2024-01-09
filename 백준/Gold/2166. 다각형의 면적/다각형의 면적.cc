#include <iostream>
#include <vector>
using namespace std;
long long x[10001];
long long y[10001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    long long a = x[n - 1] * y[0], b = x[0] * y[n - 1];
    for (int i = 0; i < n - 1; i++) {
        a += x[i] * y[i + 1];
        b += x[i + 1] * y[i];
    }
    printf("%.1lf", (double)abs(a - b) / 2);
    return 0;
}