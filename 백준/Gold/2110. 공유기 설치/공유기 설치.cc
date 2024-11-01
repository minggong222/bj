#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int n, m;
int arr[200000];
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int start = 1;
    int end = arr[n - 1] - arr[0];
    int ans = 0;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        int now = arr[0];
        int cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] - now >= mid)
            {
                cnt++;
                now = arr[i];
            }
        }
        if (cnt >= m)
        {
            start = mid + 1;
            ans = mid;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << ans;
    return 0;
}