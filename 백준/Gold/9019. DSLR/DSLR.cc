#include <iostream>
#include <queue>
#include <string>
#include <cstring>
using namespace std;
bool visit[10000];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    while (n--) {
        int a, b;
        memset(visit, false, sizeof(visit));
        cin >> a >> b;
        queue<pair<int, string>> q;
        q.push(make_pair(a, ""));
        visit[a] = true;
        while (!q.empty()) {
            int x = q.front().first;
            string answer = q.front().second;
            q.pop();
            if (x == b) {
                cout << answer << '\n';
                break;
            }
            int D, S, L, R ;
            D = x * 2 % 10000;
            S = x - 1;
            if (S < 0)
                S = 9999;
            L = (x % 1000) * 10 + x / 1000;
            R = (x % 10) * 1000 + x / 10;
            if (!visit[D]) {
                visit[D] = true;
                q.push(make_pair(D, answer + 'D'));
            }
            if (!visit[S]) {
                visit[S] = true;
                q.push(make_pair(S, answer + 'S'));
            }
            if (!visit[L]) {
                visit[L] = true;
                q.push(make_pair(L, answer + 'L'));
            }
            if (!visit[R]) {
                visit[R] = true;
                q.push(make_pair(R, answer + 'R'));
            }
        }
    }
    return 0;
}