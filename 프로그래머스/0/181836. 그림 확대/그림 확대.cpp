#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    for(auto s : picture){
        string str = "";
        for(auto c : s){
            for(int i = 0; i < k; i++){
                str += c;
            }
        }
        
        for(int i = 0; i < k; i++){
            answer.push_back(str);
        }
        str = "";
    }
    return answer;
}