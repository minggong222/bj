#include <iostream>
#include <queue>

using namespace std;
int n, answer = 0;
priority_queue<int> a, b;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push(x);
    }
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        b.push(-x);
    }
    while (!a.empty()) {
        int x, y;
        x = a.top();
        y = -b.top();
        a.pop();
        b.pop();
        answer += x * y;
    }
    cout << answer;
    return 0;
}