#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
queue<pair<long long, int>> q;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n, m;
    int answer = -1;
    cin >> n >> m;
    q.push(make_pair(m, 1));
    while (!q.empty()) {
        long long x = q.front().first;
        int y = q.front().second;
        q.pop();
        if (x == n) {
            answer = y;
            break;
        }
        if (x % 2 == 0 && x / 2 >= n) {
            q.push(make_pair(x / 2, y + 1));
        }
        if (x % 10 == 1 && x / 10 >= n) {
            q.push(make_pair(x / 10, y + 1));
        }
    }
    cout << answer;
    return 0;
}