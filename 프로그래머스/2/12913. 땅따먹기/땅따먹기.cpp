#include <iostream>
#include <vector>
using namespace std;

int solution(vector<vector<int> > land)
{
    int answer = 0;
    vector<vector<int>> dp(100001, vector<int>(4,0));
    dp[0][0] = land[0][0];
    dp[0][1] = land[0][1];
    dp[0][2] = land[0][2];
    dp[0][3] = land[0][3];
    for(int i = 1; i < land.size(); i++){
        dp[i][0] = land[i][0] + max(max(dp[i-1][1], dp[i-1][2]), dp[i-1][3]);
        dp[i][1] = land[i][1] + max(max(dp[i-1][0], dp[i-1][2]), dp[i-1][3]);
        dp[i][2] = land[i][2] + max(max(dp[i-1][1], dp[i-1][0]), dp[i-1][3]);
        dp[i][3] = land[i][3] + max(max(dp[i-1][1], dp[i-1][2]), dp[i-1][0]);
    }
    int idx = land.size()-1;
    return max(max(max(dp[idx][0], dp[idx][1]), dp[idx][2]), dp[idx][3]);
}