#include <iostream>
#include <queue>
using namespace std;
priority_queue<int> q;
int n, answer = 0;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        q.push(-a);
    }
    if (n != 1) {
        while (1) {
            int a = -q.top();
            q.pop();
            int b = -q.top();
            q.pop();
            answer += a + b;
            if (q.empty())
                break;
            q.push(-(a + b));
        }
    }
    cout << answer;
    return 0;
}