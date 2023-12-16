#include <string>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
bool cmp(vector<double> a, vector<double> b)
{
    if(a[0] == b[0])
        return (a[1] < b[1]);
    return(a[0] > b[0]);
}
vector<int> solution(int N, vector<int> stages) {
        vector<vector<double>> answer(N);
        vector<int> answer2;
    for (int i = 0; i < N; i++)
    {
        int a = 0, b = 0;
        for (auto x : stages)
        {
            if (i + 1 <= x)
            {
                a++;
                if (i + 1 == x)
                    b++;
            }
        }
        if(a != 0)
        {
            answer[i].push_back((double)b/a);
            answer[i].push_back(i+1);
        }else{
            answer[i].push_back(0);
            answer[i].push_back(i+1);
        }
    }
    sort(answer.begin(),answer.end(),cmp);
    for(int i = 0; i < answer.size(); i++)
    {
        answer2.push_back(answer[i][1]);
    }
    return answer2;
}