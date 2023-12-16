#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>
using namespace std;

int main() {
    vector<vector<int>> v;
    int max = 0;
    int x = 0, y = 0;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            int a;
            cin >> a;
            if (a >= max) {
                x = j + 1;
                y = i + 1;
                max = a;
            }
        }
    }
    cout << max << endl << y << " " << x;
    return 0;
}