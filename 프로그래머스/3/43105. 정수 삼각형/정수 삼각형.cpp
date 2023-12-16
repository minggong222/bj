#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> triangle) {
    int answer = 0;
    vector<vector<int>> v = triangle;
    for(int i = 0; i < triangle.size()-1; i++){
        for(int j = 0; j < triangle[i].size(); j++){
            if(v[i+1][j] < v[i][j] + triangle[i+1][j])
                v[i+1][j] = v[i][j] + triangle[i+1][j];
            if(v[i+1][j+1] < v[i][j] + triangle[i+1][j+1])
                v[i+1][j+1] = v[i][j] + triangle[i+1][j+1];
        }
    }
    answer = *max_element(v[v.size()-1].begin(), v[v.size()-1].end());
    return answer;
}