#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int N, M, x, y;
int matrix[1001][1001];
int answer[1001][1001];
vector<int> v;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 2) {
                x = i;
                y = j;
            }
        }
    }
    queue<pair<int, int>> q;
    q.push(make_pair(x, y));
    while (!q.empty()) {
        int i = q.front().first;
        int j = q.front().second;
        q.pop();
        if (i - 1 > 0 && !answer[i - 1][j] && matrix[i - 1][j] == 1) {
            answer[i - 1][j] = answer[i][j] + 1;
            q.push(make_pair(i - 1, j));
        }
        if (j - 1 > 0 && !answer[i][j - 1] && matrix[i][j - 1] == 1) {
            answer[i][j - 1] = answer[i][j] + 1;
            q.push(make_pair(i, j - 1));
        }
        if (i + 1 <= N && !answer[i + 1][j] && matrix[i + 1][j] == 1) {
            answer[i + 1][j] = answer[i][j] + 1;
            q.push(make_pair(i + 1, j));
        }
        if (j + 1 <= M && !answer[i][j + 1] && matrix[i][j + 1] == 1) {
            answer[i][j + 1] = answer[i][j] + 1;
            q.push(make_pair(i, j + 1));
        }
    }
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            if (answer[i][j] || !matrix[i][j])
                cout << answer[i][j] << ' ';
            else if (matrix[i][j] == 1)
                cout << -1 << ' ';
            else
                cout << 0 << ' ';
        }
        cout << '\n';
    }
    return 0;
}