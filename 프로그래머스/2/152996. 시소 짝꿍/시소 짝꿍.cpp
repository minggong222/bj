#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(vector<int> weights) {
    long long answer = 0;
    int idx = weights.size();
    sort(weights.begin(), weights.end());
    for(int i = 0; i < idx; i++)
    {
        for(int j = i+1; j < idx; j++)
        {
            if(weights[i]*4 < weights[j]*2)
                break;
            if(weights[i]*2 == weights[j]*2 || weights[i]*2 == weights[j]*3 || weights[i]*2 == weights[j]*4)
            {
                answer++;
            }else if(weights[i]*3 == weights[j]*2 || weights[i]*3 == weights[j]*3 || weights[i]*3 == weights[j]*4)
            {
                answer++;
            }else if(weights[i]*4 == weights[j]*2 || weights[i]*4 == weights[j]*3 || weights[i]*4 == weights[j]*4)
            {
                answer++;
            }
        }
    }
    return answer;
}