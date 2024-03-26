#include <iostream>
#include <vector>
using namespace std;
int n, answer = 0;
vector<vector<int>> arr(22, vector<int>(22));
void dfs(int d, int cnt, vector<vector<int>> a) {
    switch (d)
    {
    case 1:
        for (int j = 1; j <= n; j++) {
            int next = 1;
            for (int i = 2; i <= n; i++) {
                int num = a[i][j];
                a[i][j] = 0;
                if (num) {
                    if (a[next][j] == num) {
                        a[next++][j] += num;
                    }
                    else if(!a[next][j]) {
                        a[next][j] = num;
                    }
                    else {
                        a[++next][j] = num;
                    }
                }
            }
        }
        break;
    case 2:
        for (int j = 1; j <= n; j++) {
            int next = n;
            for (int i = n - 1; i > 0; i--) {
                int num = a[i][j];
                a[i][j] = 0;
                if (num) {
                    if (a[next][j] == num) {
                        a[next--][j] += num;
                    }
                    else if (!a[next][j]) {
                        a[next][j] = num;
                    }
                    else {
                        a[--next][j] = num;
                    }
                }
            }
        }
        break;
    case 3:
        for (int i = 1; i <= n; i++) {
            int next = 1;
            for (int j = 2; j <= n; j++) {
                int num = a[i][j];
                a[i][j] = 0;
                if (num) {
                    if (a[i][next] == num) {
                        a[i][next++] += num;
                    }
                    else if (!a[i][next]) {
                        a[i][next] = num;
                    }
                    else {
                        a[i][++next] = num;
                    }
                }
            }
        }
        break;
    case 4:
        for (int i = 1; i <= n; i++) {
            int next = n;
            for (int j = n - 1; j > 0; j--) {
                int num = a[i][j];
                a[i][j] = 0;
                if (num) {
                    if (a[i][next] == num) {
                        a[i][next--] += num;
                    }
                    else  if (!a[i][next]) {
                        a[i][next] = num;
                    }
                    else {
                        a[i][--next] = num;
                    }
                }
            }
        }
        break;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            answer = max(answer, a[i][j]);
        }
    }
    cnt--;
    if (!cnt)  return;
    for (int i = 1; i <= 4; i++) {
        dfs(i, cnt, a);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i <= 4; i++)
            dfs(i, 5, arr);
    cout << answer;
    return 0;
}