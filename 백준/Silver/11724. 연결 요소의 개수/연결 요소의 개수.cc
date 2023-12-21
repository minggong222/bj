#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int arr[1001][1001];
bool visit[1001];
stack<int> s;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, answer = 0;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        arr[x][y]++;
        arr[y][x]++;
    }
    for (int i = 1; i <= n; i++) {
        if (!visit[i]) {
            visit[i] = true;
            answer++;
            s.push(i);
            while (!s.empty()) {
                for (int j = 1; j <= n; j++) {
                    if (arr[s.top()][j] && !visit[j]) {
                        s.push(j);
                        visit[j] = true;
                        j = 0;
                    }
                }
                s.pop();
            }
        }
    }
    cout << answer;
}