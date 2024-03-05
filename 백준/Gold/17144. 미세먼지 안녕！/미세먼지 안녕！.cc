#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> arr;
int R, C, T;

void dif() {
    vector<vector<int>> next(R, vector<int> (C));
    copy(arr.begin(), arr.end(), next.begin());
    int airUp = 0;
    int airDown = 0;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (arr[i][j] == 0)  continue;
            if (arr[i][j] == -1) {
                if (airUp == 0)
                    airUp = i;
                else
                    airDown = i;
                continue;
            }
            int a = arr[i][j] / 5;
            if (i - 1 >= 0 && arr[i - 1][j] != -1) {
                next[i - 1][j] += a;
                next[i][j] -= a;
            }
            if (i + 1 < R && arr[i + 1][j] != -1) {
                next[i + 1][j] += a;
                next[i][j] -= a;
            }
            if (j - 1 >= 0 && arr[i][j - 1] != -1) {
                next[i][j - 1] += a;
                next[i][j] -= a;
            }
            if (j + 1 < C && arr[i][j + 1] != -1) {
                next[i][j + 1] += a;
                next[i][j] -= a;
            }
        }
    }
    next[airUp - 1][0] = 0;
    next[airDown + 1][0] = 0;
    for (int i = airUp - 1; i > 0; i--) {
        swap(next[i][0], next[i - 1][0]);
    }
    for (int i = 0; i < C - 1; i++) {
        swap(next[0][i], next[0][i + 1]);
    }
    for (int i = 0; i < airUp; i++) {
        swap(next[i][C - 1], next[i + 1][C - 1]);
    }
    for (int i = C - 1; i > 1; i--) {
        swap(next[airUp][i], next[airUp][i - 1]);
    }

    for (int i = airDown + 1; i < R - 1; i++) {
        swap(next[i][0], next[i + 1][0]);
    }
    for (int i = 0; i < C - 1; i++) {
        swap(next[R - 1][i], next[R - 1][i + 1]);
    }
    for (int i = R - 1; i > airDown; i--) {
        swap(next[i][C - 1], next[i - 1][C - 1]);
    }
    for (int i = C - 1; i > 1; i--) {
        swap(next[airDown][i], next[airDown][i - 1]);
    }
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            arr[i][j] = next[i][j];
        }
    }
    return;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> R >> C >> T;
    for (int i = 1; i <= R; i++) {
        vector<int> a;
        for (int j = 1; j <= C; j++) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        arr.push_back(a);
    }
    while(T--)
        dif();
    int answer = 0;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (arr[i][j] > 0)
                answer += arr[i][j];
        }
    }
    cout << answer;
    return 0;
}