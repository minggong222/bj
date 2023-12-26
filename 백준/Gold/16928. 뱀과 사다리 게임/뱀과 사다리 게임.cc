#include <iostream>
#include <map>
#include <queue>
using namespace std;
int n, m, answer;
map<int, int> ladder;
map<int, int> snake;
bool visit[101];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    queue<pair<int, int>> q;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        ladder[x] = y;
    }
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        snake[x] = y;
    }
    q.push(make_pair(1, 0));
    bool sw = true;
    while(sw) {
        int x = q.front().first;
        int cnt = q.front().second;
        q.pop();
        for (int i = 1; i <= 6; i++) {
            if (!visit[x + i]) {
                if (ladder[x + i]) {
                    visit[ladder[x + i]] = true;
                    q.push(make_pair(ladder[x + i], cnt + 1));
                }
                else if (snake[x + i]) {
                    visit[snake[x + i]] = true;
                    q.push(make_pair(snake[x + i], cnt + 1));
                }
                else if (x + i == 100) {
                    answer = cnt + 1;
                    sw = false;
                    break;
                }
                else {
                    visit[x + i] = true;
                    q.push(make_pair(x + i, cnt + 1));
                }
            }
        }
    }
    cout << answer;
    return 0;
}