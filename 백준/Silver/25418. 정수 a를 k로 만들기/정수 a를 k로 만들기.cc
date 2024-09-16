#include <iostream>
#include <queue>
#include <map>
#define ll long long
using namespace std;
int a, b;
queue<int> q;
int arr[1000001];
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    q.push(a);
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        if (x + 1 == b || x * 2 == b)
        {
            cout << arr[x] + 1;
            break;
        }
        if (x + 1 < b && arr[x + 1] == 0)
        {
            arr[x + 1] = arr[x] + 1;
            q.push(x + 1);
        }
        if (x * 2 < b && arr[x * 2] == 0)
        {
            arr[x * 2] = arr[x] + 1;
            q.push(x * 2);
        }
    }
    return 0;
}