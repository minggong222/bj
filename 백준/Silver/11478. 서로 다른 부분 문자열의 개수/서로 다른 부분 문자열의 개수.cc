#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string a;
    cin >> a;
    map<string, int> m;
    for (int i = 0; i < a.size(); i++) {
        string s = "";
        for (int j = 1; j <= a.size()-i; j++) {
            s = a.substr(i, j);
            if (m.find(s) == m.end())
                m.insert( {s,1});
        }
    }
    cout << m.size();
}