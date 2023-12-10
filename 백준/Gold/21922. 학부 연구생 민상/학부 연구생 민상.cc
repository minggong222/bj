#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int lab[2001][2001];
bool visit[2001][2001];
string di[2001][2001];
int n, m;
void dfs(int i, int j, int d) {
    if (visit[i][j] && di[i][j].find(d + 48) != string::npos) 
        return;
    visit[i][j] = true;
    di[i][j] += (d + 48);
    switch (lab[i][j])
    {
    case 1:
        if (d == 1 || d == 2)
            return;
        else {
            if (d == 3 && i + 1 <= n)
                dfs(i + 1, j, d);
            if (d == 4 && i - 1 > 0)
                dfs(i - 1, j, d);
        }
        break;
    case 2:
        if (d == 3 || d == 4)
            return;
        else {
            if (d == 1 && j + 1 <= m)
                dfs(i, j + 1, d);
            if (d == 2 && j - 1 > 0)
                dfs(i, j - 1, d);
        }
        break;
    case 3:
        if (d == 1 && i - 1 > 0)
            dfs(i - 1, j, 4);
        if (d == 2 && i + 1 <= n)
            dfs(i + 1, j, 3);
        if (d == 3 && j - 1 > 0)
            dfs(i, j - 1, 2);
        if (d == 4 && j + 1 <= m)
            dfs(i, j + 1, 1);
        break;
    case 4:
        if (d == 1 && i + 1 <= n)
            dfs(i + 1, j, 3);
        if (d == 2 && i - 1 > 0)
            dfs(i - 1, j, 4);
        if (d == 3 && j + 1 <= m)
            dfs(i, j + 1, 1);
        if (d == 4 && j - 1 > 0)
            dfs(i, j - 1, 2);
        break;
    default:
        if (d == 1 && j + 1 <= m)
            dfs(i, j + 1, 1);
        if (d == 2 && j - 1 > 0)
            dfs(i, j - 1, 2);
        if (d == 3 && i + 1 <= n)
            dfs(i + 1, j, 3);
        if (d == 4 && i - 1 > 0)
            dfs(i - 1, j, 4);
    }
    return;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int answer = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> lab[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (lab[i][j] == 9) {
                visit[i][j] = true;
                if (j + 1 <= m)
                    dfs(i, j + 1, 1);
                if (j - 1 > 0)
                    dfs(i, j - 1, 2);
                if (i + 1 <= n)
                    dfs(i + 1, j, 3);
                if (i - 1 > 0)
                    dfs(i - 1, j, 4);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (visit[i][j])
                answer++;
        }
    }
    cout << answer;
    return 0;
}