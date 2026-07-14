#include <string>
#include <vector>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;
    vector<vector<int>> v = {{101,0},{102,0},{103,0}};
    for(int i = 0; i < rank.size(); i++){
        if(!attendance[i])  continue;
        if(v[0][0] > rank[i]){
            swap(v[1],v[2]);
            swap(v[0],v[1]);
            v[0] = {rank[i],i};
        }else if(v[1][0] > rank[i]){
            swap(v[1],v[2]);
            v[1] = {rank[i],i};
        }else if(v[2][0] > rank[i]){
            v[2] = {rank[i],i};
        }
    }
    answer = v[0][1]*10000 + v[1][1]*100 + v[2][1];
    return answer;
}