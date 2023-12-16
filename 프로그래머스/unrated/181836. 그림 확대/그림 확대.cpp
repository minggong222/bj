#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    for(auto x:picture){
        string str = "";
        for(int j = 0; j < x.size(); j++)
            for(int i = 0; i < k; i++){
                str += x[j];
            }
        for(int i = 0; i < k; i++){
            answer.push_back(str);
        }
    }
    return answer;
}