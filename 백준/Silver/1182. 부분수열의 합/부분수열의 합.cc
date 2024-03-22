#include <iostream>
using namespace std;
int n, s;
long long answer = 0;
int a[41];
void dfs(int i, int tot) {
    if (i == n) {
        if (tot == s)    answer++;
        return;
    }
    dfs(i + 1, tot + a[i]);
    dfs(i + 1, tot);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    dfs(0, 0);
    if (s == 0)  answer--;
    cout << answer;
    return 0;
}