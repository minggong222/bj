#include <iostream>
#include <map>
#include <stack>
using namespace std;
char arr[20][20];
map<char, int> m;
int answer = 0;
int N, M;
void dfs(int x, int y, int cnt) {
    if (x + 1 < N && !m[arr[x + 1][y]]) {
        m[arr[x + 1][y]]++;
        dfs(x + 1, y, cnt + 1);
        m[arr[x + 1][y]]--;
    }
    if (x - 1 >= 0 && !m[arr[x - 1][y]]) {
        m[arr[x - 1][y]]++;
        dfs(x - 1, y, cnt + 1);
        m[arr[x - 1][y]]--;
    }
    if (y + 1 < M && !m[arr[x][y + 1]]) {
        m[arr[x][y + 1]]++;
        dfs(x, y + 1, cnt + 1);
        m[arr[x][y + 1]]--;
    }
    if (y - 1 >= 0 && !m[arr[x][y - 1]]) {
        m[arr[x][y - 1]]++;
        dfs(x, y - 1, cnt + 1);
        m[arr[x][y - 1]]--;
    }
    answer = max(answer, cnt);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> arr[i][j];
        }
    }
    m[arr[0][0]]++;
    dfs(0, 0, 1);
    cout << answer;
    return 0;
}