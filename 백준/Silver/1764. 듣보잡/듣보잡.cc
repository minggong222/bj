#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M;
    string s;
    cin >> N >> M;
    vector<string> v;
    map<string, int> m;
    for (int i = 0; i < N; i++) {
        cin >> s;
        m.insert({ s,1 });
    }
    for (int i = 0; i < M; i++) {
        cin >> s;
        if (m.find(s) != m.end())
            v.push_back(s);
    }
    sort(v.begin(), v.end());
    cout << v.size() << '\n';
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << '\n';
    }
}