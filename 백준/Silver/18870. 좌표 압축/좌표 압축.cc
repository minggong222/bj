#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    int a, x;
    cin >> a;
    vector<int> v;
    map<int, int> m;
    for (int i = 0; i < a; i++) {
        cin >> x;
        v.push_back(x);
    }
    vector<int> v1 = v;
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    for (int i = 0; i < a; i++) {
        cout << lower_bound(v.begin(), v.end(), v1[i]) - v.begin() << ' ';
    }
    return 0;
}