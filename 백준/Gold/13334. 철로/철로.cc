#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <cmath>
#define ll long long
using namespace std;
int n, d, answer = 0;
priority_queue<pair<int, int>> pq;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
            swap(a, b);
        pq.push({-b, -a});
    }
    cin >> d;
    priority_queue<int> q;
    while (!pq.empty())
    {
        int a, b;
        b = -pq.top().first;
        a = b - d;
        if (-pq.top().second >= a)
        {
            q.push(pq.top().second);
        }
        pq.pop();
        while (!q.empty())
        {
            if (-q.top() >= a)
                break;
            q.pop();
        }
        answer = max(answer, (int)q.size());
    }
    cout << answer;
    return 0;
}