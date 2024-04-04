#include <iostream>
#include <cstring>
#include <map>
using namespace std;
int start;
int arr[100001];
bool visit[100001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int answer = 0;
        memset(visit, 0, sizeof(visit));
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
            if (i == arr[i]) visit[i] = true;
        }
        for (int i = 1; i <= n; i++) {
            if (visit[i])    continue;
            int idx = i;
            bool sw = false;
            map<int, int> m;
            int cnt = 0;
            visit[i] = true;
            do {
                m[idx]++;
                idx = arr[idx];
                cnt++;
                if (m[idx]) {
                    int start = idx;
                    do {
                        idx = arr[idx];
                        cnt--;
                        if (idx == i) {
                            break;
                        }
                    } while (start != idx);
                    answer += cnt;
                    break;
                }
                if (visit[idx]) {
                    answer += cnt;
                    break;
                }
                visit[idx] = true;
            }while (!m[idx]);
        }
        cout << answer << '\n';
    }
    return 0;
}