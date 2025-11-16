#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m = 123;
        int sum = 0;
        for (int i = 0; i < 7; i++) {
            int n;
            cin >> n;
            if (n % 2 == 0) {
                sum += n;
                m = min(m, n);
            }
        }
        cout << sum << ' ' << m << '\n';
    }
    return 0;
}