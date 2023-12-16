#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int a = 0;
    int max = 0;
    for(int i = 0; i < array.size(); i++)
    {
        if(max < array[i])
        {
            max = array[i];
            a = i;
        }
    }
    answer.push_back(max);
    answer.push_back(a);
    return answer;
}