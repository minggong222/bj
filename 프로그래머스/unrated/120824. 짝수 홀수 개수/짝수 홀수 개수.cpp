#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int i=0;
    int j=0;
    for(auto n:num_list)
    {
        if(n%2 == 0)
        {
            i++;
        }else{
            j++;
        }
    }
    answer.push_back(i);
    answer.push_back(j);
    return answer;
}