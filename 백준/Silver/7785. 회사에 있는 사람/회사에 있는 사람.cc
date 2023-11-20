#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
bool cmd(string a, string b){
    return a > b;
}
int main() {
    int N;
    string s1, s2;
    cin >> N ;
    map<string, int> m;
    vector<string> v;
    for (int i = 0; i < N; i++) {
        cin >> s1 >> s2;
        if (s2 == "enter")
            m.insert({ s1,1 });
        else
            m.erase(s1);
    }
    for (auto iter = m.begin(); iter != m.end(); iter++) {
        v.push_back(iter->first);
    }
    sort(v.begin(), v.end(), cmd);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << '\n';
}