#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    int i = 0;
    sort(d.begin(),d.end());
    while(1)
    {
        if(budget >= d[i] && i < d.size())
        {
            budget -= d[i];
            answer++;
            i++;
        }else{
            return answer;
        }
        
    }
    return answer;
}