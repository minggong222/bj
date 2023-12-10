#include <iostream>
#include <string>
#include <map>
using namespace std;
double pi = 3.14159265;
long long INF = 1000000000000000000;
map<double, long long> m;
long long pibonacci(double a) {
    if (a >= 0 && a <= pi) {
        return 1;
    }
    if (!m[a]) {
        m[a] = pibonacci(a - 1) + pibonacci(a - pi);
        m[a] %= INF;
    }
    return m[a];
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int i;
    cin >> i;
    cout << pibonacci(i);
    return 0;
}