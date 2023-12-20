#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> v;
    int n, sum = 0;
    cin >> n;
    int x = floor((double)n * 0.15 + 0.5);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for (int i = x; i < v.size() - x; i++) {
        sum += v[i];
    }
    if (sum == 0)
        cout << 0;
    else
        cout << floor((double)sum / (n - x - x) + 0.5);
    return 0;
}