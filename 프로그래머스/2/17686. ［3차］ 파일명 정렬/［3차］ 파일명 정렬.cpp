#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool cmd(vector<string> a, vector<string> b){
    if(a[0] == b[0]){
        int x = stoi(a[1]);
        int y = stoi(b[1]);
        return x < y;
    }
    return a[0] < b[0];
}
vector<string> solution(vector<string> files) {
    vector<string> answer;
    vector<vector<string>> v(files.size(), vector<string>(3));
    for(int i = 0; i < files.size(); i++){
        int idx = 0;
        v[i][0] = "";
        for(int j = 0; j < files[i].size(); j++){
            if(files[i][j] >= '0' && files[i][j] <= '9'){
                idx = j;
                break;
            }else{
                v[i][0] += files[i][j];
            }
        }
        v[i][1] == "";
        for(int j = idx; j < files[i].size(); j++){
            if(files[i][j] >= '0' && files[i][j] <= '9'){
                v[i][1] += files[i][j];
            }else{
                break;
            }
        }
        v[i][2] = to_string(i);
        for(int j = 0; j < v[i][0].size(); j++){
            v[i][0][j] = tolower(v[i][0][j]);
        }
    }
    stable_sort(v.begin(), v.end(), cmd);
    for(int i = 0; i < v.size(); i++){
        answer.push_back(files[stoi(v[i][2])]);
    }
    return answer;
}