#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int x;
    cin >> x;
    vector<int> v1, v2;
    for (int i = 0; i < x; i++) {
        int a, b;
        cin >> a >> b;
        v1.push_back(a);
        v2.push_back(b);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    cout << (v1[x - 1] - v1[0]) * (v2[x - 1] - v2[0]);
    return 0;
}