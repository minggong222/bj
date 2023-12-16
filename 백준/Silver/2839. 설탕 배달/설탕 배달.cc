#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int N,cnt = 0;
    int a = 0;
    cin >> N;
    while (N > 0) {
        if (N >= 5) {
            if (N % 3 == 0) {
                a = cnt + N / 3;
            }
            N -= 5;
            cnt++;
        }
        else if (N >= 3) {
            N -= 3;
            cnt++;
        }
        else break;
    }
    if (N == 0) cout << cnt;
    else if (a != 0) cout << a;
    else cout << -1;
    return 0;
}
