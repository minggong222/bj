#include <iostream>
#include <vector>
#include <map>
#include <queue>
#define ll long long
#define INF 1234567890
#define ARR_MAX 1001
using namespace std;
int n, m, answer = INF;

priority_queue<int> pq[1001];

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int a;
            cin >> a;
            pq[i].push(a);
        }
    }
    while (1) {
        int minValue = 1000000001;
        int maxIdx = 1001;
        int maxValue = 0;
        for (int i = 0; i < n; i++) {
            if (maxValue < pq[i].top()) {
                maxValue = pq[i].top();
                maxIdx = i;
            }
            minValue = min(pq[i].top(), minValue);
        }
        answer = min(maxValue - minValue, answer);
        pq[maxIdx].pop();
        if (pq[maxIdx].empty())
            break;
    }
    cout << answer;
    return 0;
}