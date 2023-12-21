#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int N, r, c;
int answer;
void dfs(int n, int x, int y) {

    if (x == r && y == c) {
        cout << answer;
        return;
    }
    if (r >= x && r < x + n && c >= y && c < y + n) {
        dfs(n / 2, x, y);
        dfs(n / 2, x, y + n / 2);
        dfs(n / 2, x + n / 2, y);
        dfs(n / 2, x + n / 2, y + n / 2);
    }
    else {
        answer += n * n;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> r >> c;
    dfs(pow(2, N), 0, 0);
    return 0;
}