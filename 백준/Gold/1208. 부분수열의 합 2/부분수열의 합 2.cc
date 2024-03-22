#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, s;
long long answer = 0;
vector<int> a, b;
vector<int> aSum, bSum;
void dfs(int i, int tot, vector<int> v, vector<int>& Sum) {
    if (i == v.size()) {
        Sum.push_back(tot);
        return;
    }
    dfs(i + 1, tot + v[i], v, Sum);
    dfs(i + 1, tot, v, Sum);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> s;
    for (int i = 0; i < n/2; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = n / 2; i < n; i++) {
        int x;
        cin >> x;
        b.push_back(x);
    }
    dfs(0, 0, a, aSum);
    dfs(0, 0, b, bSum);
    sort(bSum.begin(), bSum.end());
    for (int i = 0; i < aSum.size(); i++) {
        answer += (upper_bound(bSum.begin(), bSum.end(), s - aSum[i]) - bSum.begin()) - (lower_bound(bSum.begin(), bSum.end(), s - aSum[i]) - bSum.begin());
    }
    if (s == 0)  answer--;
    cout << answer;
    return 0;
}