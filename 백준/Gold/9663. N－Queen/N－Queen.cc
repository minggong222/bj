#include <iostream>
#include <vector>
using namespace std;
vector<pair<int, int> > v;
int answer = 0;
int n;
void dfs(int idx) {
    if (idx == n) {
        answer++;
        return;
    }
    for (int i = 1; i <= n; i++) {
        bool sw = true;
        for (int j = 0; j < v.size(); j++) {
            if (v[j].second == i) {
                sw = false;
                break;
            }
            if (abs(v[j].first - idx - 1) == abs(v[j].second - i)) {
                sw = false;
                break;
            }
        }
        if (sw) {
            v.push_back(make_pair(idx + 1, i));
            dfs(idx + 1);
            v.pop_back();
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        v.push_back(make_pair(1, i));
        dfs(1);
        v.pop_back();
    }
    cout << answer;
    return 0;
}