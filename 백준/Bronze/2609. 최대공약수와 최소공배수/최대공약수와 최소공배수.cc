#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    for (int i = n; i >= 1; i--) {
        if (n % i == 0 && m % i == 0) {
            cout << i << '\n';
            break;
        }
    }
    for (int i = n; i <= 100000000; i++) {
        if (i % n == 0 && i % m == 0) {
            cout << i;
            break;
        }
    }
    return 0;
}