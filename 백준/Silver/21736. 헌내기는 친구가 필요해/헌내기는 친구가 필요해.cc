#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int n, m;
bool visit[601][601];
vector<string> v;
int dfs(int x, int y) {
    if (visit[x][y] || v[x][y] == 'X') return 0;
    visit[x][y] = true;
    int answer = 0;
    if (v[x][y] == 'P') {
        v[x][y] = 'O';
        answer++;
    }
    if (x - 1 >= 0) {
        answer += dfs(x - 1, y);
    }
    if (y- 1 >= 0) {
        answer += dfs(x, y - 1);
    }
    if (x + 1 < n) {
        answer += dfs(x + 1, y);
    }
    if (y + 1 < m) {
        answer += dfs(x, y + 1);
    }
    return answer;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        v.push_back(str);
    }
    int x, y;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (v[i][j] == 'I') {
                x = i;
                y = j;
                break;
            }
        }
    }
    int answer = dfs(x, y);
    if (answer)
        cout << answer;
    else
        cout << "TT";
}