#include <iostream>
#include <map>
#define DIV 1000000007;
//F[2n+1] = F[n+1]^2 + F[n]^2
//F[2n] = F[n]x(2F[n-1] + F[n])
using namespace std;
map<long, long> dp;
long long fibo(long long m) {
    if (m == 1 || m == 2) return 1;
    if (dp[m])   return dp[m];
    if (m % 2 == 0) {
        long long a = fibo(m / 2), b = fibo(m / 2 - 1);
        dp[m] = a * (2 * b + a) % DIV;
        return dp[m];
    }
    else {
        long long a = fibo(m / 2), b = fibo(m / 2 + 1);
        dp[m] = ((a * a) + (b * b)) % DIV;
        return dp[m];
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;
    cin >> n;
    cout << fibo(n);
    return 0;
}