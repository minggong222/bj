#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int n, answer = 0;
pair<int, int> problem[1000];
priority_queue<int> q;
bool cmp(pair<int, int> a, pair<int, int> b) {
    return a > b;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        problem[i] = { a,b };
    }
    sort(problem, problem + n, cmp);
    int idx = 0;
    for (int i = n; i > 0; i--) {
        while (i <= problem[idx].first) {
            q.push(problem[idx].second);
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