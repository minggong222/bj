#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define ll long long
#define INF 1234567890
using namespace std;
int n, answer = 0;
priority_queue<int> q;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        q.push(a);
    }
    int cnt = 1;
    while (!q.empty()) {
        cnt++;
        int a = q.top();
        q.pop();
        if (cnt + a > answer) {
            answer = cnt + a;
        }
    }
    cout << answer;
    return 0;
}