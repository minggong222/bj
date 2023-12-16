#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    for(auto x : num_list){
        while(x != 1){
            if(x % 2 == 0){
                x = x/2;
            }
            else{
                x = (x-1)/2;
            }
            answer++;
        }
    }
    return answer;
}