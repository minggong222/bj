#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    int answer = 0;
    while(answer <= A.size()){
        if(A==B)    return answer;
        A = A.back() + A.substr(0, A.size()-1);
        answer++;
    }
    return -1;
}