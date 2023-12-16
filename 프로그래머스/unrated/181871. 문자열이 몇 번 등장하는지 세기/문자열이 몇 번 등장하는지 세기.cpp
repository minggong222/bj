#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    while(1){
        int a = myString.find(pat);
        if(a == -1)
            break;
        else{
            myString.erase(myString.begin(), myString.begin()+a+1);
            answer++;
        }
    }
    return answer;
}