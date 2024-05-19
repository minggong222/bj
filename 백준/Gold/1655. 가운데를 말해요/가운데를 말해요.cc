#include <iostream>
#include <vector>
#include <queue>
#define ll long long
using namespace std;
int n;
priority_queue<int> b, s;
int answer = 0;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (b.size() == s.size()) {
            s.push(x);
        }
        else {
            b.push(-x);
        }
        if (!b.empty() && !s.empty() && s.top() > -b.top()) {
            int bv = -b.top(), sv = s.top();
            b.pop();
            s.pop();
            b.push(-sv);
            s.push(bv);
        }
        cout << s.top() << '\n';
    }
}