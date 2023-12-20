#include <iostream>
#include <set>
using namespace std;
int arr[101][101];
int n;
set<int> s;
int dfs(int x) {
    if (0 == x)  return 1;
    if (x < 0)   return 0;
    return dfs(x - 1) + dfs(x - 2) + dfs(x - 3);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        cout << dfs(x) << '\n';
    }
    return 0;
    }