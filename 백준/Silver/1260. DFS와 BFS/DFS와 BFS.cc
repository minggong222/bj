#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
int N, M, V;
int arr[1001][1001];
stack<int> dfs;
queue<int> bfs;
vector<int> answer;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M >> V;
    for (int i = 1; i <= M; i++) {
        int x, y;
        cin >> x >> y;
        arr[x][y]++;
        arr[y][x]++;
    }
    dfs.push(V);
    bfs.push(V);
    answer.push_back(V);
    while (!dfs.empty()) {
        for (int i = 1; i <= N; i++) {
            if (arr[dfs.top()][i] && find(answer.begin(), answer.end(), i) == answer.end()) {
                answer.push_back(i);
                dfs.push(i);
                i = 0;
            }
        }
        dfs.pop();
    }
    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i] << ' ';
    }
    cout << '\n';
    answer.clear();
    answer.push_back(V);
    while (!bfs.empty()) {
        for (int i = 1; i <= N; i++) {
            if (arr[bfs.front()][i] && find(answer.begin(), answer.end(), i) == answer.end()) {
                answer.push_back(i);
                bfs.push(i);
            }
        }
        bfs.pop();
    }
    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i] << ' ';
    }
}