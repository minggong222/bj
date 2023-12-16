#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int m, int n, vector<vector<int>> puddles) {
    int answer = 0;
    vector<vector<long long>> v(n, vector<long long>(m, 0));
    v[0][0] = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            vector<int> w = {j+1, i+1};
            if(find(puddles.begin(), puddles.end(),w) 
               == puddles.end()){
                v[i][j] = v[i][j]%1000000007;
                if(j + 1 < m){
                    v[i][j+1] = v[i][j+1] + v[i][j];
                }
                if(i + 1 < n){
                    v[i+1][j] = v[i+1][j] + v[i][j];
                }
            }
        }
    }
    return v[n-1][m-1];
}