#include <iostream>
#include <vector>
#include<cstring>
using namespace std;
int sudoku[9][9];

bool dfs(int x, int y) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (sudoku[i][j])
                continue;
            else {
                bool num[10];
                memset(num, false, sizeof(num));
                for (int k = 0; k < 9; k++) {
                    if (sudoku[i][k] != 0)
                        num[sudoku[i][k]] = true;
                }
                for (int k = 0; k < 9; k++) {
                    if (sudoku[k][j] != 0)
                        num[sudoku[k][j]] = true;
                }
                int a = i / 3;
                int b = j / 3;
                for (int k = a * 3; k < a * 3 + 3; k++) {
                    for (int l = b * 3; l < b * 3 + 3; l++) {
                        if (sudoku[k][l] != 0)
                            num[sudoku[k][l]] = true;
                    }
                }
                bool sw = false;
                for (int k = 1; k <= 9; k++) {
                    if (num[k])
                        continue;
                    else {
                        sw = true;
                        sudoku[i][j] = k;
                        if (dfs(i, j))
                            return true;
                        else {
                            sudoku[i][j] = 0;
                            num[k] = true;
                            sw = false;
                        }
                    }
                }
                if (!sw)
                    return false;
            }
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for (int i = 0; i < 9; i++) {
        string str;
        cin >> str;
        for (int j = 0; j < str.size(); j++) {
            sudoku[i][j] = str[j] - '0';
        }
    }
    dfs(0, 0);
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << sudoku[i][j];
        }
        cout << '\n';
    }
    return 0;
}