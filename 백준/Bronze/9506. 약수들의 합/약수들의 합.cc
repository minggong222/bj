#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int x;
    while (1) {
        vector<int> v;
        int s = 0;
        cin >> x;
        if (x == -1) break;
        for (int i = 1; i < x; i++) {
            if (x % i == 0) {
                s += i;
                v.push_back(i);
            }
        }
        if (s == x) {
            cout << x << " = ";
            for (int i = 0; i < v.size() - 1; i++) {
                cout << v[i] << " + ";
            }
            cout << v[v.size() - 1] << endl;
        }
        else cout << x << " is NOT perfect." << endl;
    }
    return 0;
}