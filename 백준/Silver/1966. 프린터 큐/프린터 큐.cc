#include <iostream>
#include <queue>
#include <map>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y, answer = 0;
        bool sw = true;
        cin >> x >> y;
        queue<pair<int, int>> q;
        map<int, int> m;
        for (int j = 0; j < x; j++) {
            int z;
            cin >> z;
            m[z]++;
            if (j == y)
                q.push(make_pair(z, 1));
            else
                q.push(make_pair(z, 0));
        }
        for (int j = 9; j >= 1; j--) {
            while (m[j]) {
                if (q.front().first == j) {
                    m[j]--;
                    answer++;
                    if (q.front().second == 1) {
                        j = 0;
                        break;
                    }
                    q.pop();
                }
                else {
                    q.push(q.front());
                    q.pop();
                }
            }
        }
        cout << answer << '\n';
    }
    return 0;
}