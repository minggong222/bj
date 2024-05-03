#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int n, m;
long long answer = 0;
pair<int, int> dia[300001];
int bag[300001];
priority_queue<int> q;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        dia[i] = { a,b };
    }
    for (int i = 0; i < m; i++) {
        cin >> bag[i];
    }
    sort(dia, dia + n);
    sort(bag, bag + m);
    int idx = 0;
    for (int i = 0; i < m; i++) {
        while (idx < n && bag[i] >= dia[idx].first) {
            q.push(dia[idx].second);
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