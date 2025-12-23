#include <iostream>
#include <vector>
#include <map>
#include <queue>
#define ll long long
using namespace std;
int n, m, answer = 0;
int arr[100];
vector<int> s;
queue<int> N[101];
map<int, int> cnt;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
        cnt[arr[i]]++;
        N[arr[i]].push(i);
    }
    for (int j = 0; j < n; j++) {
        s.push_back(0);
    }
    for (int i = 0; i < m; i++) {
        int idx = -1;
        int sc = 0;
        for (int j = 0; j < n; j++) {
            if (s[j] == arr[i] || s[j] == 0) {
                s[j] = arr[i];
                N[arr[i]].pop();
                idx = -1;
                break;
            }
            if (N[s[j]].empty()) {
                idx = j;
                sc = 100;
                continue;
            }
            if (sc < N[s[j]].front()) {
                idx = j;
                sc = N[s[j]].front();
            }
        }
        if (idx != -1) {
            s[idx] = arr[i];
            N[arr[i]].pop();
            answer++;
        }
    }
    cout << answer;
    return 0;
}