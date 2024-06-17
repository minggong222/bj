#include <iostream>
#include <queue>
#define ll long long
using namespace std;
int n, answer = 1;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    priority_queue<pair<int, int>> pq;
    for (int i = 0; i < n; i++) {
        int s, e;
        cin >> s >> e;
        pq.push({ -s,-e });
    }
    priority_queue<int> end;
    end.push(pq.top().second);
    pq.pop();
    while (!pq.empty()) {
        int s = -pq.top().first;
        int e = -pq.top().second;
        pq.pop();
        if (-end.top() <= s) {
            end.pop();
            end.push(-e);
        }
        else {
            answer++;
            end.push(-e);
        }
    }
    cout << answer;
}