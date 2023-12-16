#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;
bool cmp(vector<string> a, vector<string> b)
{
    if(a[1] == b[1])
        return (a[0] > b[0]);
    return (a[1] > b[1]);
}
vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer(id_list.size(),0);
    sort(report.begin(),report.end());
    report.erase(unique(report.begin(),report.end()),report.end());
    int idx = report.size();
    int j = 0;
    vector<vector<string>> x(idx);
    for(int i = 0; i + j < idx; i++)
    {
        istringstream ss(report[i]);
        string stringBuffer;
        while (getline(ss, stringBuffer, ' ')){
        x[i].push_back(stringBuffer);
        }
    }
    sort(x.begin(),x.end(),cmp);
    int q = 1;
    int i = 0;
    idx = x.size();
    while(true)
    {
        if(i + 1 < idx && x[i][1] == x[i+1][1])
        {
            q++;
        }else{
            if(q >= k)
            {
                for(int j = i-q+1; j <= i; j++)
                {
                    for(int k = 0; k < id_list.size(); k++)
                    {
                        if(id_list[k] == x[j][0])
                        {
                            answer[k]++;
                            break;
                        }
                    }
                }
                
            }
            q = 1;
        }
        i++;
        if(i == idx)
            break;
    }
    return answer;
}