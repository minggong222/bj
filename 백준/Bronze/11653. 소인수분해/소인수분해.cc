#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int x, y = 2;
    cin >> x;
    while (x > 1)
    {
        if (x % y == 0) {
            cout << y << endl;
            x = x / y;
        }
        else {
            y++;
        }
    }
    return 0;
}