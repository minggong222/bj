#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <algorithm>
#include <cmath>
using namespace std;

bool prime(int x) {
    if (x == 1)  return false;
    for (int i = 2; i < x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    vector<int> v;
    int x,y, answer = 0;
    cin >> x >> y;
    for (int i = x; i <= y; i++) {
        if (prime(i)) {
            v.push_back(i);
        }
    }
    if (v.empty())
        cout << -1 << endl;
    else
    {
        for (int i = 0; i < v.size(); i++) {
            answer += v[i];
        }
        cout << answer << endl << v[0] << endl;
    }
    return 0;
}