#include <iostream>
#include <vector>
using namespace std;
int sudoku[9][9];
bool a = false;
void dfs(int x, int y) {
    if (sudoku[x][y] != 0) {
        if (x < 8)
            dfs(x + 1, y);
        else if (y < 8)
            dfs(0, y + 1);
        else {
            a = true;
            return;
        }
    }
    else {
        for (int i = 1; i <= 9; i++) {
            bool sw = true;
            for (int j = 0; j < 9; j++) {
                if (sudoku[x][j] == i || sudoku[j][y] == i || sudoku[x - (x % 3) + (j / 3)][y - (y % 3) + (j % 3)] == i) {
                    sw = false;
                    break;
                }
            }
            if (sw) {
                sudoku[x][y] = i;
                dfs(x, y);
                if (a)   return;
                sudoku[x][y] = 0;
            }
        }
    }

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for (int i = 0; i < 9; i++) { 
        for (int j = 0; j < 9; j++) {
            cin >> sudoku[i][j];
        }
    }
    dfs(0, 0);
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << sudoku[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
