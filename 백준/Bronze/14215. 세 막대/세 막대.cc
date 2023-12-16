#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v = { a,b,c };
    sort(v.begin(), v.end());
    if (v[2] >= v[1] + v[0]) cout << 2 * (v[0] + v[1]) - 1;
    else    cout << v[0] + v[1] + v[2];
    return 0;
}