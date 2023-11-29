#include <iostream>
#include <map>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, a, max = 0;
    double sum = 0;
    vector<int> v, w;
    map<int,int> m;
    cin >> n;
    for (int j = 0; j < n; j++) {
        cin >> a;
        m[a]++;
        v.push_back(a);
        sum += a;
    }
    for (auto iter = m.begin(); iter != m.end(); iter++) {
        if (iter->second > max)
        {
            w.clear();
            max = iter->second;
            w.push_back(iter->first);
        }
        else if (iter->second == max)   w.push_back(iter->first);
    }
    sort(v.begin(), v.end());
    cout << floor(sum/n + 0.5) << '\n';
    cout << v[n/2] << '\n';
    if (w.size() > 1)
        cout << w[1] << '\n';
    else
        cout << w[0] << '\n';
    cout << v.back() - v.front() << '\n';
    return 0;
}