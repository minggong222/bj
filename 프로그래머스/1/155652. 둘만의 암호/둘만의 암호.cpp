#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    int idx = skip.size();
    for(auto x: s)
    {
        int i = 0;
        char result = x + 1;
        if(result > 'z')
            result -= 26;
        while(true){
            for(int j = 0; j < idx; j++){
                if(result == skip[j]){
                    result++;
                    if(result > 'z')
                        result -= 26;
                    j = -1;
                }
            }
            i++;
            if(i != index){
                result++;
                if(result > 'z')
                    result -= 26;
            }
            else{
                break;
            }
        }
        answer += result;
    }
    return answer;
}