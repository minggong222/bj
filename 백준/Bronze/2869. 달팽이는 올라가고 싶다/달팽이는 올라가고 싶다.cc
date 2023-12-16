#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int A, B, V;
    cin >> A >> B >> V;
    if ((V - B) % (A - B) == 0)
        cout << (V - B) / (A - B);
    else
        cout << (V - B) / (A - B) + 1;
    return 0;
}