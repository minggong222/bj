#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    vector<int> answer2;
    for(auto x : score)
    {
        answer2.push_back((x[0] + x[1]) / 2 + (x[0] + x[1]) % 2 );
    }
    for(int i = 0; i < answer2.size();i++)
    {
        int a = 1;
        for(int j = 0; j < answer2.size(); j++)
        {
            if(answer2[i] < answer2[j])
            {
                a++;
            }
        }
        answer.push_back(a);
    }
    return answer;
}