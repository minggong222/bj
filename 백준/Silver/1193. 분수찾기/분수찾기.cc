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
        if (n <= a) {
            if (answer % 2 == 0) {
                int x = a - n + 1;
                cout << (answer + 1) - x << '/' << x;
            }
            else {
                int x = a - n + 1;
                cout << x << '/' << (answer + 1) - x;
            }
            break;
        }
        a += ++answer;
    }
    return 0;
}