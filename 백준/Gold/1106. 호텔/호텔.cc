#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int person[1001] = { 0 };
    int cost[101] = { 0 };
    int dp[100001] = { 0 };
    int a, b;
    cin >> a >> b;
    for (int i = 0; i < b; i++) {
        cin >> cost[i] >> person[i];
    }
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < 100001; j++) {
            if(j - cost[i] >= 0)
                dp[j] = max(dp[j], dp[j - cost[i]] + person[i]);
        }
    }
    for (int i = 0; i < 100001; i++) {
        if (dp[i] >= a) {
            cout << i;
            break;
        }
    }
}