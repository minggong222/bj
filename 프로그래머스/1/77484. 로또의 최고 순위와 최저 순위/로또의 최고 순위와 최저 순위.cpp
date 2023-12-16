#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int z = 0;
    int a = 0;
    for(int i = 0 ; i < lottos.size(); i++)
    {
        if(lottos[i] == 0)
            {
                z++;
            }
        for(int j = 0 ; j < lottos.size(); j++)
        {
            if(lottos[i] == win_nums[j])
                a++;
        }
    }
    answer.push_back(7 - a - z);
    answer.push_back(7 - a);
    if(answer[1] >= 6)
        answer[1] = 6;
    if(answer[0] >= 6)
        answer[0] = 6;
    return answer;
}