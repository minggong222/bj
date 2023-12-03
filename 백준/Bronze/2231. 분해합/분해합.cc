#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int s, min = 0;
    cin >> s;
    for (int i = 1; i < s; i++) {
        int t = i, n = i;
        while (t > 0) {
            n += t % 10;
            t = t / 10;
        }
        if (n == s) { 
            min = i;
            break;
        }
    }
    cout << min;
    return 0;
}
