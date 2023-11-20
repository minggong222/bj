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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M;
    string s;
    cin >> N >> M;
    map<string, int> m1;
    map<int, string> m2;
    for (int i = 0; i < N; i++) {
        cin >> s;
        m1.insert({ s, i + 1 });
        m2.insert({ i + 1, s });
    }
    for (int i = 0; i < M; i++) {
        cin >> s;
        if (atoi(s.c_str()) == 0) {
            cout << m1[s] << '\n';
        }
        else {
            cout << m2[atoi(s.c_str())] << '\n';
        }
    }
}