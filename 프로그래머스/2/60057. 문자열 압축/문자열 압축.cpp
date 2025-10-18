#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = s.size();
    for(int i = 1; i < s.size(); i++){
        string str = "";
        for(int j = 0; j < s.size(); j+=i){
            int idx = 1;
            str += s.substr(j,i);
            while(1){
                if(j + i >= s.size())   break;
                if(s.substr(j,i) != s.substr(j + i,i))  break;
                j+=i;
                idx++;
            }
            if(idx != 1){
                str += to_string(idx);
            }
        }
        answer = min(answer, (int)str.size());
    }
    return answer;
}