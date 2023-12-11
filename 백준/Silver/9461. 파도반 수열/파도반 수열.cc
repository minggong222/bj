#include <iostream>

using namespace std;
long long f[101];
long long pa(int i) {
    if (i > 0 && i < 4)   return 1;
    if (i == 4 || i == 5)    return 2;
    if (!f[i])   f[i] = pa(i - 1) + pa(i - 5);
    return f[i];
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        cout << pa(x) << '\n';
    }
    return 0;
}