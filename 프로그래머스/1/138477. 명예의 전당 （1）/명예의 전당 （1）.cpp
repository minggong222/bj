#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(int a, int b)
{ return (a>b); }
vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> a;
    for(int i = 0; i < score.size(); i++)
    {
        a.push_back(score[i]);
        sort(a.begin(),a.end(),cmp);
        if(a.size() < k)
            answer.push_back(a[i]);
        else
            answer.push_back(a[k-1]);
    }

    return answer;
}