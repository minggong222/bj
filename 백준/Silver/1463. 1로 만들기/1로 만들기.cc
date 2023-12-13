#include <iostream>
using namespace std;
int minimum = 1000000;
void dfs(int i, int m) {
    if (m >= minimum)
        return;
    if (i == 1) {
        minimum = m;
        return;
    }
    if (i % 3 == 0)    dfs(i / 3, m + 1);
    if (i % 2 == 0)    dfs(i / 2, m + 1);
    dfs(i - 1, m + 1);
    return;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    dfs(n, 0);
    cout << minimum;
    return 0;
}