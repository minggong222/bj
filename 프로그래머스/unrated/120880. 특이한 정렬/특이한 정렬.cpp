#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer;
    for(auto x : numlist)
    {
        answer.push_back(x-n);
    }
    
    vector<int> answer2(answer.size());
    
    for(int i = 0; i < answer.size(); i++)
    {
        int a = 0;
        for(int j = 0; j < answer.size(); j++)
        {
            if(abs(answer[j]) <= abs(answer[i]) && j!=i)
            {
                a++;
                if(answer[i] > answer[j] && abs(answer[j]) == abs(answer[i]))
                    a--;
            }
        }
        answer2[a] = answer[i] + n;
    }
    return answer2;
}