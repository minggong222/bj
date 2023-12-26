#include <iostream>
#include <map>
#include <cstring>
using namespace std;
int ans1, ans2, n;
string str[100];
bool visit[100][100];
void dfs1(int x, int y, char a) {
    visit[x][y] = true;
    if (x - 1 >= 0 && !visit[x - 1][y] && str[x - 1][y] == a) {
        dfs1(x - 1, y, a);
    }
    if (y - 1 >= 0 && !visit[x][y - 1] && str[x][y - 1] == a) {
        dfs1(x, y - 1, a);
    }
    if (x + 1 < n && !visit[x + 1][y] && str[x + 1][y] == a) {
        dfs1(x + 1, y, a);
    }
    if (y + 1 < n && !visit[x][y + 1] && str[x][y + 1] == a) {
        dfs1(x, y + 1, a);
    }
    return;
}
void dfs2(int x, int y) {
    visit[x][y] = true;
    if (x - 1 >= 0 && !visit[x - 1][y] && (str[x - 1][y] == 'R' || str[x - 1][y] == 'G')) {
        dfs2(x - 1, y);
    }
    if (y - 1 >= 0 && !visit[x][y - 1] && (str[x][y - 1] == 'R' || str[x][y - 1] == 'G')) {
        dfs2(x, y - 1);
    }
    if (x + 1 < n && !visit[x + 1][y] && (str[x + 1][y] == 'R' || str[x + 1][y] == 'G')) {
        dfs2(x + 1, y);
    }
    if (y + 1 < n && !visit[x][y + 1] && (str[x][y + 1] == 'R' || str[x][y + 1] == 'G')) {
        dfs2(x, y + 1);
    }
    return;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<char, int> m;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> str[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!visit[i][j]) {
                dfs1(i, j, str[i][j]);
                m[str[i][j]]++;
            }
        }
    }
    memset(visit, false, sizeof(visit));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!visit[i][j] && (str[i][j] == 'R' || str[i][j] == 'G')) {
                dfs2(i, j);
                m['Y']++;
            }
        }
    }
    cout << m['R'] + m['G'] + m['B'] << ' ' << m['Y'] + m['B'];
    return 0;
}