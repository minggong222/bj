#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int matrix[101][101];
bool visit[101];
vector<int> v;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) visit[j] = false;
        stack<int> s;
        s.push(i);
        while (!s.empty()) {
            int idx = s.top();
            s.pop();
            for (int j = 1; j <= N; j++) {
                if (matrix[idx][j] && !visit[j]) {
                    s.push(j);
                    visit[j] = true;
                }
            }
        }
        for (int j = 1; j <= N; j++)
            cout << visit[j] << ' ';
        cout << '\n';
    }
    return 0;
}