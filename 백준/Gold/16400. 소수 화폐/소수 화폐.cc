#include<iostream>
#include<queue>
#include<vector>
using namespace std;
bool prime[40001];
vector<int> arr;
int dp[40001];
int main() {
    int n;
    cin >> n;
    for (int i = 2; i <= 40000; i++) {
        if (prime[i])    continue;
        arr.push_back(i);
        for (int j = i + i; j <= 40000; j += i) {
            prime[j] = true;
        }
    }
    for (int i = 0; i < arr.size(); i++) {
        int idx = arr[i]+1;
        dp[arr[i]]++;
        while (idx <= 40000) {
            dp[idx] += dp[idx-arr[i]]%123456789;
            dp[idx] %= 123456789;
            idx++;
        }
    }
    cout << dp[n];
    return 0;
}