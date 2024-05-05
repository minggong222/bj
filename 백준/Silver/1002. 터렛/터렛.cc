#include <iostream>
#include <cmath>

using namespace std;
int n;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    while (n--) {
        double x, y, a, b, r1, r2;
        cin >> x >> y >> r1 >> a >> b >> r2;
        if (x == a && y == b) {
            if (r1 == r2)
                cout << -1 << '\n';
            else
                cout << 0 << '\n';
        }
        else {
            double r = sqrt((x - a) * (x - a) + (y - b) * (y - b));
            if (r1 > r2)
                swap(r1, r2);
            if (r == r1 + r2 || r2 == r + r1)
                cout << 1 << '\n';
            else if (r > r1 + r2 || r2 > r + r1)
                cout << 0 << '\n';
            else
                cout << 2 << '\n';
        }
    }
    return 0;
}