#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    if(num_list.size() > 10){
        for(auto a : num_list){
            answer += a;
        }
    }else{
        answer = 1;
        for(auto a : num_list){
            answer *= a;
        }
    }
    return answer;
}