#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;

bool done[1001];
int N, M;
priority_queue<pair<int, int>> pq;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        cin >> N >> M;
        for (int i = 1; i <= M; i++) {
            int a, b;
            cin >> a >> b;
            pq.push(make_pair(-b, -a));
        }
        int cnt = 0;
        fill(done, done + 1001, false);
        while (!pq.empty()) {
            int b = -pq.top().first;
            int a = -pq.top().second;
            pq.pop();
            for (int i = a; i <= b; i++) {
                if (!done[i]) {
                    done[i] = true;
                    cnt++;
                    break;
                }
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}