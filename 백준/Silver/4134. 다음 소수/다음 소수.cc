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
    int n;
    long long x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x > 3) {
            while (!prime(x)) {
                x++;
            }
        }
        else if(x <= 2){
            x = 2;
        }
        cout << x << '\n';
    }
}