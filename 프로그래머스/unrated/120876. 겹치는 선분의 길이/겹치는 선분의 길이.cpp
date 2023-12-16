#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool cmp(vector<int> a, vector<int> b)
{
    return a[1] > b[1];
}
int solution(vector<vector<int>> lines) {
    int answer = 0;
    sort(lines.begin(),lines.end());
    double i = lines[0][0] + 0.5;
    sort(lines.begin(),lines.end(),cmp);
    for(i; i<=lines[0][1]; i = i +1)
    {
        if(lines[0][0]<=i && lines[0][1] >= i && lines[1][0]<=i && lines[1][1]>=i)
        {
            answer++;
        }else if(lines[0][0]<i && lines[0][1] > i && lines[2][0]<i && lines[2][1]>=i)
        {
            answer++;
        }else if(lines[2][0]<i && lines[2][1] > i && lines[1][0]<i && lines[1][1]>=i)
        {
            answer++;
        }
    }
    return answer;
}