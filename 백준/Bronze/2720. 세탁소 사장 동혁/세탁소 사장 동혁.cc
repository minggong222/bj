#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    while (n--) {
        vector<int> v;
        int a;
        cin >> a;
        v.push_back(a / 25);
        a = a % 25;
        v.push_back(a / 10);
        a = a % 10;
        v.push_back(a / 5);
        a = a % 5;
        v.push_back(a / 1);
        for (int i = 0; i < 4; i++) {
            cout << v[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}