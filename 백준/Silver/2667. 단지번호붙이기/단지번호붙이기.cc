#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
char home[25][25];
bool visit[25][25];
int n;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    vector<int> answer;
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> home[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (home[i][j] == '1' && !visit[i][j]) {
                visit[i][j] = true;
                queue<pair<int, int>> q;
                n = 1;
                q.push(make_pair(i, j));
                while (!q.empty()) {
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop();
                    if (x - 1 >= 0 && home[x - 1][y] == '1' && !visit[x - 1][y]) {
                        q.push(make_pair(x - 1, y));
                        visit[x - 1][y] = true;
                        n++;
                    }
                    if (y - 1 >= 0 && home[x][y - 1] == '1' && !visit[x][y - 1]) {
                        q.push(make_pair(x, y - 1));
                        visit[x][y - 1] = true;
                        n++;
                    }
                    if (x + 1 < N && home[x + 1][y] == '1' && !visit[x + 1][y]) {
                        q.push(make_pair(x + 1, y));
                        visit[x + 1][y] = true;
                        n++;
                    }
                    if (y + 1 < N && home[x][y + 1] == '1' && !visit[x][y + 1]) {
                        q.push(make_pair(x, y + 1));
                        visit[x][y + 1] = true;
                        n++;
                    }
                }
                answer.push_back(n);
            }
        }
    }
    sort(answer.begin(), answer.end());
    cout << answer.size() << '\n';
    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i] << '\n';
    }
    return 0;
}