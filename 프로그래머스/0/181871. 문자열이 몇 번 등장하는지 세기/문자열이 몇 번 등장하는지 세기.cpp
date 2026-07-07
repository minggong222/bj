#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    for(int i = 0; i < myString.size(); i++){
        answer++;
        for(int j = 0; j < pat.size(); j++){
            if(myString[i+j] != pat[j]){
                answer--;
                break;
            }
        }
    }
    return answer;
}