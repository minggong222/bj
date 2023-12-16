#include <string>
#include <vector>

using namespace std;

int solution(string number) {
    int answer = 0;
    for(auto x : number){
        answer = answer + (x - 48);
    }
    return answer%9;
}