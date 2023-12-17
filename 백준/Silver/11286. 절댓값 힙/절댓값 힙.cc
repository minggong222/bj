#include <iostream>
#include <queue>
using namespace std;
int n;
priority_queue<pair<int,int>, vector<pair<int, int>>, greater<>> pq;
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
                cout << pq.top().second << '\n';
                pq.pop();
            }
        }
        else
            pq.push(make_pair(abs(x), x));
    }
    return 0;
}