#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main() {
    string a, b, c;
    cin >> a >> c >> b;
    if (a.size() < b.size()) {
        swap(a, b);
    }
    if (c == "+") {
        if (a.size() == b.size())
            a[0] = '2';
        else
            a[a.size()-b.size()] = '1';
    }
    else {
        for (int i = 1; i < b.size(); i++) {
            a += '0';
        }
    }
    cout << a;
    return 0;
}