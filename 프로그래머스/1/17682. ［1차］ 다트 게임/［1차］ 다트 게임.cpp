#include <string>
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;

int solution(string dartResult) {
    int answer = 0;
    vector<int> a;
    int z =0;
    for(int i = 0; i < dartResult.size(); i++)
    {
        if(dartResult[i+1] != '0')
        {
            if(dartResult[i+1] == 'S')
                a.push_back(pow(dartResult[i]-48,1));
            else if(dartResult[i+1] == 'D')
                a.push_back(pow(dartResult[i]-48,2));
            else if(dartResult[i+1] == 'T')
                a.push_back(pow(dartResult[i]-48,3));
        }else{
            i++;
            if(dartResult[i+1] == 'S')
                a.push_back(pow(10,1));
            else if(dartResult[i+1] == 'D')
                a.push_back(pow(10,2));
            else if(dartResult[i+1] == 'T')
                a.push_back(pow(10,3));
        }
        if(i+2 < dartResult.size())
        {
            if(dartResult[i+2] == '*')
            {
                if(i == 0)
                    a[z] = a[z]*2;
                else
                {
                    a[z-1] = a[z-1]*2;
                    a[z] = a[z]*2;
                }
                i = i+2;
            }else if(dartResult[i+2] == '#')
            {
                a[z] = -a[z];
                i = i+2;
            }else{
                i = i+1;
            }
        }
        z++;
    }
    for(auto x: a)
        answer += x;
    return answer;
}