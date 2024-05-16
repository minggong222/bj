#include <iostream>
#include <vector>
#include <queue>
#define ll long long
using namespace std;
int n;
priority_queue<int> q;
int answer = 0;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        q.push(x);
    }
    int cnt = 0;
    while (!q.empty()) {
        int x = q.top();
        q.pop();
        cnt++;
        answer = max(answer, x * cnt);
    }
    cout << answer;
}