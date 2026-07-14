#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for(auto c : s){
        char a = c;
        if(isupper(a)){
            if(a + n > 'Z') a = a + n - 26;
            else a = a + n;
        }else if(islower(a)){
            if(a + n > 'z') a = a + n - 26;
            else a = a + n;
        }
        answer += a;
    }
    return answer;
}