#include <iostream>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while (1) {
        int x, y, z;
        cin >> x >> y >> z;
        if (x == 0 && y == 0 && z == 0)  break;
        if (x * x + y * y == z * z || x * x + z * z == y * y || y * y + z * z == x * x)
            cout << "right" << '\n';
        else
            cout << "wrong" << '\n';
    }
    return 0;
}