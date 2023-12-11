#include <iostream>

using namespace std;
long long f[101][101][101];
int answer = 0;
long long w(int a, int b, int c) {
    if (a <= 50 or b <= 50 or c <= 50) {
        return 1;
    }
    if (a > 70 or b > 70 or c > 70) {
        if (!f[70][70][70])
            f[70][70][70] = w(70, 70, 70);
        return f[70][70][70];
    }
    if (a < b and b < c) {
        if (!f[a][b][c - 1])
            f[a][b][c - 1] = w(a, b, c - 1);
        if (!f[a][b - 1][c - 1])
            f[a][b - 1][c - 1] = w(a, b - 1, c - 1);
        if (!f[a][b - 1][c])
            f[a][b - 1][c] = w(a, b - 1, c);
        return f[a][b][c - 1] + f[a][b - 1][c - 1] - f[a][b - 1][c];
    }
    if (!f[a - 1][b][c])
        f[a - 1][b][c] = w(a - 1, b, c);
    if (!f[a - 1][b - 1][c])
        f[a - 1][b - 1][c] = w(a - 1, b - 1, c);
    if (!f[a - 1][b][c - 1])
        f[a - 1][b][c - 1] = w(a - 1, b, c - 1);
    if (!f[a - 1][b - 1][c - 1])
        f[a - 1][b - 1][c - 1] = w(a - 1, b - 1, c - 1);
    return f[a - 1][b][c] + f[a - 1][b - 1][c] + f[a - 1][b][c - 1] - f[a - 1][b - 1][c - 1];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a = 0, b = 0, c = 0;
    while (true) {
        cin >> a >> b >> c;
        if(a == -1 && b == -1 && c == -1)  break;
        cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a + 50, b + 50, c + 50) << '\n';
    }
    return 0;
}