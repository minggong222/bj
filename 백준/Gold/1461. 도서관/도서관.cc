#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int dp[25];
int main() {
    int n, m, answer = 0;
    cin >> n >> m;
    priority_queue<int> pq, mq;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x < 0) {
            mq.push(-x);
        }
        else {
            pq.push(x);
        }
    }
    int pn = 0, mn = 0;
    if(!pq.empty())
        pn = pq.top();
    if(!mq.empty())
        mn = mq.top();
    answer -= max(pn, mn);
    while (!pq.empty()) {
        pn = pq.top();
        answer += pn * 2;
        for (int i = 0; i < m; i++) {
            if (!pq.empty())
                pq.pop();
        }
    }
    while (!mq.empty()) {
        mn = mq.top();
        answer += mn * 2;
        for (int i = 0; i < m; i++) {
            if (!mq.empty())
                mq.pop();
        }
    }
    
    cout << answer;
    return 0;
}