#include <iostream>
#define DIV		1000000007
using namespace std;
long long a, b;
long long power(long long x, long long m) {
    if (m == 0) return 1;
    long long k = power(x, m / 2) % DIV;
    if (m % 2 == 0)    return k * k % DIV;
    else               return k * k % DIV * x % DIV;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long answer = 1, div = 1;
    cin >> a >> b;
    for (int i = 1; i <= b; i++) {
        answer = (answer * a--) % DIV;
        div = (div * i) % DIV;
    }

    cout << ((answer % DIV) * power(div, DIV - 2) % DIV) % DIV;
    return 0;
}