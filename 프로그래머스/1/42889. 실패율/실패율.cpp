#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
bool cmd(pair<double, int> a, pair<double, int> b){
    if(a.first == b.first)
        return a.second < b.second;
    return a.first > b.first;
}
vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<double, int>> ans;
    map<int, int> m1;
    map<int, int> m2;
    for(int i = 1; i <= N; i++){
        m1[i] = 0;
        m2[i] = 0;
    }
    for(auto x : stages){
        for(int i = 1; i <= x; i++){
            m1[i]++;
        }
        m2[x]++;
    }
    for(int i = 1; i <= N; i++){
        if(m1[i] == 0){
            ans.push_back({0,i});
        }else
            ans.push_back({(double)m2[i]/m1[i],i});
    }
    sort(ans.begin(), ans.end(), cmd);
    for(int i = 0; i < N; i++){
        answer.push_back(ans[i].second);
    }
    return answer;
}