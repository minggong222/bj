#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> mats, vector<vector<string>> park) {
    int answer = -1;
    int size = 0;
    int dp[100][100];
    for(int i = 0; i < park.size(); i++){
        for(int j = 0; j < park[i].size(); j++){
            if(park[i][j] == "-1"){
                dp[i+1][j+1] = min(min(dp[i][j], dp[i][j+1]), dp[i+1][j]) + 1;
            }else{
                dp[i+1][j+1] = 0;
            }
            size = max(dp[i+1][j+1], size);
        }
    }
    sort(mats.begin(), mats.end());
    for(int i = mats.size()-1; i >= 0; i--){
        if(size >= mats[i]){
            answer = mats[i];
            break;
        }
    }
    return answer;
}