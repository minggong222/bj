#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    vector<int> a;
    int i = 0;
    for(auto x: num_list)
    {
        a.push_back(x);
        i++;
        if(i == n)
        {
            answer.push_back(a);
            a.clear();
            i=0;
        }
    }
    return answer;
}