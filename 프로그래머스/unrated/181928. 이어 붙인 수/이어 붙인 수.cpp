#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer1 = 0;
    int answer2 = 0;
    for(auto x:num_list){
        if(x%2 == 1){
            answer1 = answer1*10 + x;
        }else{
            answer2 = answer2*10 + x;
        }
    }
    return answer1 + answer2;
}