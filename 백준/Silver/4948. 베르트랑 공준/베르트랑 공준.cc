#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <cmath>
#include <algorithm>
using namespace std;
bool prime(int x) {
    if (x == 1)
        return false;
    if (x == 2 || x == 3)
        return true;
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
    int answer[123456 * 2 + 1] = { 0, };
    int n;
    for (int i = 1; i <= 2 * 123456; i++) {
        answer[i] = answer[i - 1];
        if (prime(i))
            answer[i]++;

    }
    while(true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        cout << answer[n * 2] - answer[n] << '\n';
    }
}