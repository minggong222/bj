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
    int answer = 1, a = 1;
    while (true) {
        if (n <= a) break;
        a += 6 * answer;
        answer++;
    }
    cout << answer;
    return 0;
}