#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
bool cmp(string a, string b) { 
    if (a.size() == b.size())    return a < b;
    else                         return a.size() < b.size();
}
int main() {
    int a;
    string s;
    cin >> a;
    vector<string> v;
    for (int i = 0; i < a; i++) {
        cin >> s;
        v.push_back(s);
    }
    sort(v.begin(), v.end(), cmp);   
    cout << v[0] << '\n';
    for (int i = 1; i < v.size(); i++) {
        if (v[i] == v[i - 1])  continue;
        cout << v[i] << '\n';
    }
    return 0;
}