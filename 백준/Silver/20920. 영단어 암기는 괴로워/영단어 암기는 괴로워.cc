#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b) {
    if (a.second == b.second) {
        if (a.first.size() == b.first.size())
            return a.first < b.first;
        return a.first.size() > b.first.size();
    }
    return a.second > b.second;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    vector<pair<string, int>> v;
    map<string ,int > word;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        if (str.size() >= m) word[str]++;
    }
    for (auto x : word) {
        v.push_back(make_pair(x.first, x.second));
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i].first << '\n';
    }
    return 0;
}