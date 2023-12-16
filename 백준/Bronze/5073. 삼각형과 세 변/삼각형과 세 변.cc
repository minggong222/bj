#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    while(1){
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0) break;
        if (max(a, max(b, c)) >= a + b + c - max(a, max(b, c))) cout << "Invalid" << endl;
        else if (a == b && b == c && c == a)   cout << "Equilateral" << endl;
        else if (a != b && b != c && c != a)    cout << "Scalene" << endl;
        else    cout << "Isosceles" << endl;
    }
    return 0;
}