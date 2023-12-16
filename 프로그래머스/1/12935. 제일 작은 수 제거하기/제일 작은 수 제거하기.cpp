#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    if(arr.size() == 1)
    {
        answer.push_back(-1);
        return answer;
    }
    answer = arr;
    sort(arr.begin(),arr.end());
    for(int i = 0; i< arr.size();i++)
    {
        if(answer[i] == arr[0])
        {
            answer.erase(answer.begin() + i);
            break;
        }
    }
    return answer;
}