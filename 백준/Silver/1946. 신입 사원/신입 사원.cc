#include <iostream>
#include <queue>
#include <cstring>
#define ll long long
using namespace std;
int t;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> t;
    while (t--)
    {
        int n;
        int arr[100000];
        memset(arr, 0, sizeof(arr));
        priority_queue<pair<int, int>> q;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            q.push({-a, -b});
        }
        int ans = 0;
        int temp = q.top().second;
        while (!q.empty())
        {
            int x = q.top().second;
            q.pop();
            if(temp < x){
                ans++;
                temp = x;
            }
        }
        cout << ans+1 << '\n';
    }
    return 0;
}