#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(int a, int b){ return (a > b);}
int solution(int k, int m, vector<int> score) {
    int answer = 0;
    int a = score.size()/m;
    if(m > score.size())
        return 0;
    sort(score.begin(),score.end(),cmp);
    for(int i = 1; i <= a; i++)
    {
        answer += m*score[m*i-1];
    }
    return answer;
}