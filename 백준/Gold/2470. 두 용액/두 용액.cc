#include <iostream>
#include <algorithm>
using namespace std;
long long num[100001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> num[i];
    }
    sort(num + 1, num + n + 1);
    long long i = 1, j = n, a = 0, b = 0, min = 100000000000;
    while (i != j) {
        long long x = num[i] + num[j];
        if (abs(x) < min) {
            min = abs(x);
            a = num[i];
            b = num[j];
            if (x == 0)
                break;
        }
        if (x < 0)  i++;
        else    j--;
    }
    cout << a << ' ' << b;
    return 0;
}