#include <iostream>
#include <queue>
#define ll long long
using namespace std;
priority_queue<int> q;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        q.push(-a);
    }
    for (int i = 0; i < n*n-n; i++)
    {
        int a;
        cin >> a;
        if(-q.top() < a){
            q.pop();
            q.push(-a);
        }
    }
    cout << -q.top();
    return 0;
}