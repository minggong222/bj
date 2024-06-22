#include <iostream>
#include <vector>
#include <queue>
#define ll long long
using namespace std;
int n, k;
int arr[300001];
int answer = 0;
priority_queue<int> q;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n >> k;
    cin >> arr[1];
    for (int i = 2; i <= n; i++) {
        cin >> arr[i];
        q.push(arr[i] - arr[i - 1]);
    }
    for (int i = 0; i < k -1; i++) {
        q.pop();
    }
    while (!q.empty()) {
        answer += q.top();
        q.pop();
    }
    cout << answer;
}