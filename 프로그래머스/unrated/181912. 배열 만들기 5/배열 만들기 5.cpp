#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    for(int i = 0; i < intStrs.size();i++){
        int a = 0;
        for(int j = s; j < s+l; j++){
            a = a*10 + (intStrs[i][j] - 48);
        }
        if(a > k)
            answer.push_back(a);
    }
    return answer;
}