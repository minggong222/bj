#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long
using namespace std;
int n, answer = 0;
pair<int, int> p[200000];
priority_queue<int> q;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        p[i] = { -a,b };
    }
    sort(p, p + n);
    int idx = 0;
    for (int i = n; i > 0; i--) {
        while (idx < n && -p[idx].first >= i) {
            q.push(p[idx].second);
            idx++;
        }
        if (!q.empty()) {
            answer += q.top();
            q.pop();
        }
    }
    cout << answer;
    return 0;
}