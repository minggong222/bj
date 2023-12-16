#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int mul = 1;
    for(int i = 0 ; i < num_list.size(); i++){
        mul = mul * num_list[i];
        answer += num_list[i];
    }
    if(mul <= pow(answer, 2))
        return 1;
    return 0;
}