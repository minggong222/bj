#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> elements) {
    vector<int> answer;
    int z = elements.size();
    for(int i = 1; i < z; i++)
    {
        for(int j = 0; j < z; j++)
        {
            int sum = 0;
            for(int k = 0; k < i; k++)
            {
                sum += elements[(k+j)%z];
            }
            answer.push_back(sum);
        }
    }
    sort(answer.begin(), answer.end());
    answer.erase(unique(answer.begin(),answer.end()),answer.end());
    return answer.size()+1;
}