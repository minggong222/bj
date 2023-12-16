#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
bool cmp(vector<int> a, vector<int> b) { 
    if (a[1] == b[1])    return a[0] < b[0];
    else                 return a[1] < b[1];
}
int main() {
    int a, x, y;
    cin >> a;
    vector<vector<int>> v;
    for (int i = 0; i < a; i++) {
        cin >> x >> y;
        v.push_back({x,y});
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < a; i++) {
        cout << v[i][0] << ' ' << v[i][1] << '\n';
    }
    return 0;
}