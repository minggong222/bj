#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    for(auto str : intStrs){
        string intStr = "";
        for(int i = 0; i < l; i++){
            intStr+=str[i+s];
        }
        if(stoi(intStr) > k){
            answer.push_back(stoi(intStr));
        }
    }
    return answer;
}