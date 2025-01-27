#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int n;
pair<int, int> arr[101];
int dp[101];
int answer = 0;
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
        arr[i] = {a, b};
    }
    sort(arr, arr + n);
    for(int i = 0; i < n; i++){
        dp[i] = 1;
        for(int j = 0; j < i; j++){
            if(arr[i].second > arr[j].second){
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        answer = max(answer,dp[i]);
    }
    cout << n - answer;
    return 0;
}