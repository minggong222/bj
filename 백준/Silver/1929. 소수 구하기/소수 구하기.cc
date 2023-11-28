#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <cmath>
#include <algorithm>
using namespace std;
bool prime(long long x) {
    for (int i = 2; i <= sqrt(x)+1; i++) {
        if (x % i == 0)
            return false;
    }
    return true;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    for (int i = n; i <= m; i++) {
        if (i > 3) {
            if (prime(i))
                cout << i << '\n';
        }
        else if(i == 3){
            cout << 3 << '\n';
        }
        else if (i == 2) {
            cout << 2 << '\n';
        }
    }
}