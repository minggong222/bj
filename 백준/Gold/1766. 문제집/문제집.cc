#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
int n, m;
int arr[32001];
vector<int> v[32001];
vector<int> answer;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        arr[y]++;
    }
    for (int i = 1; i <= n; i++) {
        sort(v[i].begin(), v[i].end());
    }
    while (answer.size() != n) {
        for (int i = 1; i <= n; i++) {
            if (!arr[i]) {
                arr[i]--;
                answer.push_back(i);
                for (int j = 0; j < v[i].size(); j++) {
                    arr[v[i][j]]--;
                }
                break;
            }
        }
    }
    for (int i = 0; i < answer.size(); i++)
        cout << answer[i] << ' ';
    return 0;
}