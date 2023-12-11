#include <iostream>

using namespace std;
long long f[40];
int answer = 0;
long long fib(int n) {
    if (n == 1 || n == 2) {
        answer++;
        return 1;
    }
    else return (fib(n - 1) + fib(n - 2));
}

long long fibonacci(int n) {
    f[1] = f[2]  = 1;
    for (int i = 3; i <= n; i++) {
        f[i] = f[i - 1] + f[i - 2];
        answer++;
    }
    return f[n];
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    fib(n);
    cout << answer << ' ';
    answer = 0;
    fibonacci(n);
    cout << answer;
    return 0;
}