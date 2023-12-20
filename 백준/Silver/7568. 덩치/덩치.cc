#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, answer = 0;
    vector<pair<int, pair<int, int>>> v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(1, make_pair(x, y)));
    }
    for (int i = 0; i < n-1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[i].second.first < v[j].second.first && v[i].second.second < v[j].second.second)
                v[i].first++;
            else if (v[i].second.first > v[j].second.first && v[i].second.second > v[j].second.second)
                v[j].first++;
        }
    }
    for (int i = 0; i < n; i++)
        cout << v[i].first << ' ';
    return 0;
}