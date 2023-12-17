#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>
using namespace std;
int coin[11];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, answer = 0;
    cin >> n >> m;
    for (int i = n; i > 0; i--) {
        cin >> coin[i];
    }
    int i = 1;
    while (m != 0) {
        if (coin[i] <= m) {
            answer++;
            m -= coin[i];
        }
        else
            i++;
    }
    cout << answer;
    return 0;
}