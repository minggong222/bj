#include <string>
#include <vector>
#include <format>
using namespace std;

vector<int> solution(string s) {
    vector<int> answer = {0, 0};
    while(s != "1"){
        int o = 0;
        int z = 0;
        for(int i = s.size()-1; i >= 0; i--){
            if(s[i] == '0'){
                s.erase(s.begin() + i);
                z++;
            }
        }
        o = s.size();
        s = format("{:b}", o);
        answer[0]++;
        answer[1] += z;
    }
    return answer;
}