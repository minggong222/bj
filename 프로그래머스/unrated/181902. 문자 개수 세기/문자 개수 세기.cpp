#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer(52, 0);
    for(auto x : my_string){
        if(isupper(x)){
            answer[x-'A']++;
        }else
            answer[x-'a'+26]++;
    }
    return answer;
}