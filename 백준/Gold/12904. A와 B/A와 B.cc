#include <iostream>
#include <queue>
#include <deque>
#include <string>
#include <algorithm>
#include <map>
#define ll long long
using namespace std;
string S, T;
deque<char> dq;
map<char, int> m;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> S >> T;
    for (int i = 0; i < T.size(); i++) {
        dq.push_back(T[i]);
    }
    while (T.size() != S.size()) {
        if (T.back() == 'A') {
            T.pop_back();
        }
        else {
            T.pop_back();
            reverse(T.begin(), T.end());
        }
    }
    if (S == T)
        cout << 1;
    else
        cout << 0;
}