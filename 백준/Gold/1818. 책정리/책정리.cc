#include <iostream>
#include <vector>
#include <map>
#include <queue>
#define ll long long
#define INF 1000000007
using namespace std;
int n, answer = 0;
int arr[200001];
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        int idx = lower_bound(arr,arr+answer,x) - arr;
        answer = max(idx + 1, answer);
        arr[idx] = x;
        
    }
    cout << n - answer;
    return 0;
}