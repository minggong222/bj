#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    int z = 0;
    int a = lost.size();
    answer = n - a;
    int i = 0;
    sort(lost.begin(),lost.end());
    sort(reserve.begin(), reserve.end());
    while(true)
    {
        if(i == reserve.size())
            break;
        for(int j = 0; j < lost.size(); j++)
        {
            if(reserve[i] == lost[j])
            {
                reserve.erase(reserve.begin() + i);
                lost.erase(lost.begin() + j);
                i--;
                j = lost.size();
            }
         }
        i++;
    }
    i = 0;
    while(true)
    {
        if(i == reserve.size())
            break;
        for(int j = 0; j < lost.size(); j++)
        {
            if(reserve[i] - lost[j] == -1 || reserve[i] - lost[j] == 1)
            {
                reserve.erase(reserve.begin() + i);
                lost.erase(lost.begin() + j);
                i--;
                j = lost.size();
            }
        }
        i++;
    }
    a = a - lost.size();
    return answer + a;
}