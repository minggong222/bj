#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool cmp(int a, int b) { return a > b; }
int main() {
    string a = "";
    cin >> a;
    sort(a.begin(), a.end(), cmp);
    cout << a << '\n';
    return 0;
}