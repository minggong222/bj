#include <iostream>

using namespace std;
long long a, b, c;
long long power(long long b) {
    if (b == 0) return 1;
    if (b == 1) return a % c;
    long long k = power(b / 2) % c;
    if (b % 2 == 0) return k * k % c;
    return k * k % c * a % c;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> a >> b >> c;
    cout << power(b);
    return 0;
}