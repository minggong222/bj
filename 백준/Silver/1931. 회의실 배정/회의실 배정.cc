#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N;
vector<pair<int, int>> v;
bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N;
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end(), cmp);
    int last = v[0].second, answer = 1;
    for (int i = 1; i < v.size(); i++) {
        if (v[i].first >= last) {
            last = v[i].second;
            answer++;
        }
    }
    cout << answer;
    return 0;
}