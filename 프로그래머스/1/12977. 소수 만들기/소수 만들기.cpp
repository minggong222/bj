#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    vector<bool> prime(3000, true);
    prime[1] = false;
    for(int i = 2; i < 3000; i++){
        if(!prime[i])   continue;
        for(int j = i+i; j < 3000; j+=i){
            prime[j] = false;
        }
    }
    for(int i = 0; i < nums.size(); i++){
        for(int j = i+1; j < nums.size(); j++){
            for(int k = j+1; k < nums.size(); k++){
                if(prime[nums[i] + nums[j] + nums[k]])
                    answer++;
            }
        }
    }
    return answer;
}