#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, x, answer = 0;
    stack<int> a;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        if (x == 0)  a.pop();
        else a.push(x);
    }
    while(!a.empty()) {
        answer += a.top();
        a.pop();
    }
    cout << answer;
    return 0;
}