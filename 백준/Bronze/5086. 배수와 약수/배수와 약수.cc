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
    while (1) {
        cin >> x >> y;
        if (x == 0 && y == 0)    break;
        if (y % x == 0) cout << "factor" << endl;
        else if(x % y == 0) cout << "multiple" << endl;
        else cout << "neither" << endl;
    }
    return 0;
}