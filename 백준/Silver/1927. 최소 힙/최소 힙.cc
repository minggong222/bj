#include <iostream>
#include <queue>
using namespace std;
int n;
priority_queue<int, vector<int>, greater<int>> pq;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (!x) {
            if (pq.empty()) {
                cout << 0 << '\n';
            }
            else {
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
        else
            pq.push(x);
    }
    return 0;
}