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
    int n, x, y, a;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        int a = x;
        for (int i = 2; i <= x; i++) {
            while (x % i == 0 && y % i == 0) {
                x /= i;
                y /= i;
            }
        }
        cout << a*y << '\n';
    }
}