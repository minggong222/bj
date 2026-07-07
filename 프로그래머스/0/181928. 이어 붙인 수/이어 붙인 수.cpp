#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int a = 0, b = 0;
    for(auto x : num_list){
        if(x%2 == 0){
            a = a*10+x;
        }else{
            b = b*10+x;
        }
    }
    answer = a + b;
    return answer;
}