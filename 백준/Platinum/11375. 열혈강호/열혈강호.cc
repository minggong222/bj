#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int> v[1001];
int slt[1001];
bool done[1001];
int N, M;

bool dfs(int x) {
    for (int i = 0; i < v[x].size(); i++) {
        int p = v[x][i];
        if (done[p]) continue;
        done[p] = true;
        if (slt[p] == 0 || dfs(slt[p])) {
            slt[p] = x;
            return true;
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M;
    for (int i = 1; i <= N; i++) {
        int a, b;
        cin >> a;
        for (int j = 0; j < a; j++) {
            cin >> b;
            v[i].push_back(b);
        }
    }
    int cnt = 0;
    for (int i = 1; i <= N; i++) {
        fill(done, done + 1001, false);
        if (dfs(i))  cnt++;
    }
    cout << cnt;
    return 0;
}