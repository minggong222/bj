#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list, int n) {
    int answer = 0;
    for(auto x : num_list){
        if(n == x)
            return 1;
    }
    return answer;
}