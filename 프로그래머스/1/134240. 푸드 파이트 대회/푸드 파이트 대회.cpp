#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    int z = 0;
    for(int j = 1; j < food.size(); j++)
    {
        z++;
        for(int i = 0; i < food[j]/2; i++)
            answer.push_back(z+48);
    }
    answer.push_back('0');
    for(int i = answer.size() - 2; i >= 0 ; i--)
    {
        answer.push_back(answer[i]);
    }
    return answer;
}