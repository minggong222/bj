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
    int answer = 2;
    while (n--) {
        answer += pow(2, n);
    }
    cout << answer * answer;
    return 0;
}