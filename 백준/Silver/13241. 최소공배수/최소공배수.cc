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
    long long int x, y, a;
    cin >> x >> y;
    a = x;
    for (int i = 2; i <= x; i++) {
        while (x % i == 0 && y % i == 0) {
            x /= i;
            y /= i;
        }
    }
    cout << a * y << '\n';
}