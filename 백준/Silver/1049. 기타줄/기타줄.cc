#include <iostream>
#include <queue>
#define ll long long
using namespace std;
int n, m;
priority_queue<int> set;
priority_queue<int> q;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        set.push(-a);
        set.push(-b * 6);
        q.push(-b);
    }
    int ans = (-set.top()) * (n / 6) + (-q.top() * (n % 6));
    ans = min(ans, (-set.top()) * (n / 6 + 1));
    cout << ans;
    return 0;
}