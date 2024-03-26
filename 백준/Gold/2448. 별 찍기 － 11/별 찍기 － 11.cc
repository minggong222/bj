#include <iostream>

using namespace std;
int n;
char arr[3073][6145];
void star(int x, int y, int i) {
    if (i == 3) {
        arr[x][y] = '*';
        arr[x + 1][y - 1] = '*';
        arr[x + 1][y + 1] = '*';
        arr[x + 2][y - 2] = '*';
        arr[x + 2][y - 1] = '*';
        arr[x + 2][y] = '*';
        arr[x + 2][y + 1] = '*';
        arr[x + 2][y + 2] = '*';
    }
    else {
        int j = i / 2;
        star(x, y, j);
        star(x + j, y - j, j);
        star(x + j, y + j, j);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n * 2 - 1; j++) {
            arr[i][j] = ' ';
        }
    }

    star(1, n, n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n * 2 - 1; j++) {
             cout << arr[i][j];
        }
        cout << '\n';
    }
    return 0;
}