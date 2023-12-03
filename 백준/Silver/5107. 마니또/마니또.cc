#include <iostream>
#include <queue>
#include <string>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, i = 1, answer = 0;
    string str;
    queue<string> q;
    stack<string> s;
    cin >> n;
    while (n != 0) {
        for (int i = 0; i < n; i++) {
            cin >> str;
            q.push(str);
            cin >> str;
            q.push(str);
        }

        while (!q.empty()) {
            if (s.empty()) {
                s.push(q.front());
                q.pop();
                s.push(q.front());
                q.pop();
                answer++;
            }
            else {
                if (s.top() == q.front()) {
                    s.pop();
                    q.pop();
                    if (s.top() == q.front()) {
                        q.pop();
                        s.pop();
                    }
                    else {
                        s.push(q.front());
                        q.pop();
                    }
                }
                else {
                    q.push(q.front());
                    q.pop();
                    q.push(q.front());
                    q.pop();
                }
            }
        }
        cout << i++ << ' ' << answer << '\n';
        answer = 0;
        cin >> n;
    }
    return 0;
}