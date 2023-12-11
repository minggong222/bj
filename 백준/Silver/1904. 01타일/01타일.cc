#include <iostream>

using namespace std;
long long f[1000001];
int answer = 0,n;
int bi(int i) {
    if (i == 0 || i == 1)  return 1;
    if(!f[i])
        f[i] = (bi(i - 1) + bi(i - 2)) % 15746;
    return f[i];
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    cout << bi(n);
    return 0;
}