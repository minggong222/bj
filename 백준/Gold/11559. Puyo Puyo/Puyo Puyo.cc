#include <iostream>
#include <vector>
using namespace std;
char v[12][6];
int n;
bool visit[12][6];
bool sw = false;
void dfs(int i, int j) {
    visit[i][j] = true;
    n++;
    if (i - 1 >= 0 && !visit[i - 1][j] && v[i - 1][j] == v[i][j]) {
        dfs(i - 1, j);
    }
    if (j - 1 >= 0 && !visit[i][j - 1] && v[i][j - 1] == v[i][j]) {
        dfs(i, j - 1);
    }
    if (i + 1 < 12 && !visit[i + 1][j] && v[i + 1][j] == v[i][j]) {
        dfs(i + 1, j);
    }
    if (j + 1 < 6 && !visit[i][j + 1] && v[i][j + 1] == v[i][j]) {
        dfs(i, j + 1);
    }
    if (n >= 4) {
        sw = true;
    }
}
void erase(int i, int j) {
    visit[i][j] = false;
    if (i - 1 >= 0 && visit[i - 1][j] && v[i - 1][j] == v[i][j]) {
        erase(i - 1, j);
    }
    if (j - 1 >= 0 && visit[i][j - 1] && v[i][j - 1] == v[i][j]) {
        erase(i, j - 1);
    }
    if (i + 1 < 12 && visit[i + 1][j] && v[i + 1][j] == v[i][j]) {
        erase(i + 1, j);
    }
    if (j + 1 < 6 && visit[i][j + 1] && v[i][j + 1] == v[i][j]) {
        erase(i, j + 1);
    }
    v[i][j] = '.';
}
void f(int i, int j) {
    visit[i][j] = false;
    if (i - 1 >= 0 && visit[i - 1][j] && v[i - 1][j] == v[i][j]) {
        f(i - 1, j);
    }
    if (j - 1 >= 0 && visit[i][j - 1] && v[i][j - 1] == v[i][j]) {
        f(i, j - 1);
    }
    if (i + 1 < 12 && visit[i + 1][j] && v[i + 1][j] == v[i][j]) {
        f(i + 1, j);
    }
    if (j + 1 < 6 && visit[i][j + 1] && v[i][j + 1] == v[i][j]) {
        f(i, j + 1);
    }
    if (n >= 4) {
        sw = true;
    }
}
int main() {
    int answer = -1;
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> v[i][j];
        }
    }
    do {
        sw = false;
        for (int i = 0; i < 6; i++) {
            for (int j = 11; j >= 0; j--) {
                if (v[j][i] == '.') continue;
                n = 0;
                dfs(j, i);
                if (n >= 4)
                    erase(j, i);
                else {
                    f(j, i);
                }
            }
        }
        answer++;
        for (int i = 0; i < 6; i++) {
            for (int j = 11; j >= 0; j--) {
                if (v[j][i] == '.') {
                    for (int k = j - 1; k >= 0; k--) {
                        if (v[k][i] != '.') {
                            v[j][i] = v[k][i];
                            v[k][i] = '.';
                            break;
                        }
                    }
                }
            }
        }
    } while(sw);
    cout << answer;
    return 0;
}