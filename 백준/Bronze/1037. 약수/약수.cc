#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    vector<int> v;
    cin >> n;
    for (int j = 0; j < n; j++) {
        cin >> k;
        v.push_back(k);
    }
    if (n == 1)
        cout << v[0] * v[0];
    else {
        sort(v.begin(), v.end());
        cout << v.front() * v.back();
    }
    return 0;
}