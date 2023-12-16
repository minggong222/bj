#include <string>
#include <vector>

using namespace std;

int solution(string num_str) {
    int answer = 0;
    for(auto x : num_str){
        answer+= x-48;
    }
    return answer;
}