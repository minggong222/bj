#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> a;
    for(auto x: commands)
    {
        for(int i = x[0]-1; i < x[1]; i++)
        {
            a.push_back(array[i]);
        }
        sort(a.begin(),a.end());
        answer.push_back(a[x[2]-1]);
        a.clear();
    }
    return answer;
}