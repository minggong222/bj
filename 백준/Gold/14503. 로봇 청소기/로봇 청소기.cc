#include <iostream>

#define ll long long
using namespace std;
int arr[51][51];
bool visit[51][51];
int x, y, dir, answer = 0;
int N, M;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> N >> M;
    cin >> x >> y >> dir;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
                visit[i][j] = true;
        }
    }
    bool sw = true;
    while (sw) {
        if (!visit[x][y]) {
            visit[x][y] = true;
            answer++;
        }
        if (visit[x + 1][y] && visit[x - 1][y] && visit[x][y + 1] && visit[x][y - 1]) {
            switch (dir)
            {
            case 0:
                if (arr[x + 1][y] != 0)
                    sw = false;
                else
                    x++;
                break;
            case 1:
                if (arr[x][y - 1] != 0)
                    sw = false;
                else
                    y--;
                break;
            case 2:
                if (arr[x - 1][y] != 0)
                    sw = false;
                else
                    x--;
                break;
            case 3:
                if (arr[x][y + 1] != 0)
                    sw = false;
                else
                    y++;
                break;
            }
        }
        else {
            dir = (dir + 3) % 4;
            switch (dir)
            {
            case 0:
                if (visit[x - 1][y] == false) {
                    x--;
                }
                break;
            case 1:
                if (visit[x][y + 1] == false) {
                    y++;
                }
                break;
            case 2:
                if (visit[x + 1][y] == false) {
                    x++;
                }
                break;
            case 3:
                if (visit[x][y - 1] == false) {
                    y--;
                }
                break;
            }
        }
    }
    cout << answer;
}