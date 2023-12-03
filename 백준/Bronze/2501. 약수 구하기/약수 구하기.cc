#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    vector<int> v;
    for (int i = 1; i <= x; i++) {
        if (x % i == 0) v.push_back(i);
    }
    if (v.size() >= y) cout << v[y - 1];
    else cout << 0;
    return 0;
}