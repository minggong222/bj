#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x, y, z, w, a, b;
    cin >> x >> y >> z >> w;
    a = x * w + z * y;
    b = y * w;
    for (int i = 2; i <= b; i++) {
        while (a % i == 0 && b % i == 0) {
            a /= i;
            b /= i;
        }
    }
    cout << a << ' ' << b << '\n';
}