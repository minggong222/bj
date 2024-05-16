#include <iostream>
#include <vector>
#include <queue>
#define ll long long
using namespace std;
int n, m;
queue<int> q;
vector<int> answer;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        q.push(i);
    }
    while (!q.empty()) {
        for (int i = 1; i < m; i++) {
            q.push(q.front());
            q.pop();
        }
        answer.push_back(q.front());
        q.pop();
    }
    cout << "<" << answer[0];
    for (int i = 1; i < answer.size(); i++) {
        cout << ", " << answer[i];
    }
    cout << ">";
}