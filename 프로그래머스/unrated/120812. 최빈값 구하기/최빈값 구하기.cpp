#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(vector<int> &a, vector<int> &b)
{
    if (a[1] == b[1])
        return(a[0] > b[0]);
    else return a[1] > b[1];
}
int solution(vector<int> array) {
    vector<vector<int>> answer(array.size());
    int temp = 0;
    for (int i = 0; i < array.size(); i++)
    {
        answer[i].push_back(array[i]);
        for (int j = 0; j < array.size(); j++)
        {
            if (array[i] == array[j])
                temp++;
        }
        answer[i].push_back(temp);
        temp = 0;
    }
    sort(answer.begin(), answer.end(), cmp);
    if(array.size() > 1 && answer[0][1] != array.size() && answer[0][1] == answer[answer[0][1]][1])
        return -1;
    return answer[0][0];
}