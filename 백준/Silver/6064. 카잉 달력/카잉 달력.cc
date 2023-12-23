#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int n, m, x, y, answer;
        cin >> n >> m >> x >> y;
        answer = x - n;
        x %= n;
        y %= m;
        while (1) {
            if ((answer += n) % m == y || answer > n * m) {
                break;
            }
        }
        if (answer > n * m)
            cout << -1 << '\n';
        else
            cout << answer << '\n';
    }
    return 0;
}