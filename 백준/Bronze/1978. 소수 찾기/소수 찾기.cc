#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <algorithm>
#include <cmath>
using namespace std;

bool prime(int x) {
    for (int i = 2; i < x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    int n, answer = 0;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        if (x != 1 &&prime(x))    answer++;
    }
    cout << answer;
    return 0;
}