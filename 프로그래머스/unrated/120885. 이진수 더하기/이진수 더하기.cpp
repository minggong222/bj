#include <string>
#include <vector>
#include <bits/stdc++.h>
#include <bitset>
using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
    answer.push_back(48);
    if(bin1.size()>=bin2.size())
    {
        for(int i = 0; i < bin1.size();i++)
        {
            if(bin1.size() - i  > bin2.size()) //7 456 3
                answer.push_back(bin1[i]);
            else
                answer.push_back(bin1[i] + bin2[bin2.size() + i - bin1.size()] - 48);
        }
    }else{
        for(int i = 0; i < bin2.size();i++)
        {
            if(bin2.size() - i  > bin1.size()) //7 456 3
                answer.push_back(bin2[i]);
            else
                answer.push_back(bin2[i] + bin1[bin1.size() + i - bin2.size()] - 48);
        }
    }
    for(int i = answer.size()-1; i >= 0;i--)
    {
        if(answer[i] >= 50)
        {
            if(answer[i] == 50)
            {
                answer[i] = 48;
                answer[i-1] += 1;
            }else if(answer[i] == 51)
            {
                answer[i] = 49;
                answer[i-1] += 1;
            }
        }
    }
     if(answer[0] == 48)
    {
        for(int i = 0; i < answer.size()-1;i++)
        {
            answer[i] = answer[i+1];
        }
         answer.pop_back();
    }
    return answer;
}