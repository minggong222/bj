#include <iostream>
#include <vector>
#include <queue>
#define ll long long
using namespace std;
int n, m;
priority_queue<int> q;
int answer = 0;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        q.push(-x);
    }
    answer++;
    int cover = -q.top() + m - 1;
    while (!q.empty()) {
        int e = -q.top();
        q.pop();
        if (e > cover) {
            answer++;
            if(!q.empty())
                cover = e + m - 1;
        }
    }
    cout << answer;
}