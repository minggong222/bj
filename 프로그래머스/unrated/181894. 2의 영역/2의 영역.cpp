#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    auto pos1 = find(arr.begin(),arr.end(),2);
    auto pos2 = find(pos1+1,arr.end(),2);
    if(pos1 == arr.end())
    {
        answer.push_back(-1);
        return answer;
    }
    if(pos2 == arr.end())
    {
        answer.push_back(2);
        return answer;
    }
    while(1){
        auto pos3 = find(pos2+1,arr.end(),2);
        if(pos3 != arr.end())
            pos2 = pos3;
        else
            break;
    }
    vector<int>::iterator iter = pos1;
    for(; iter != pos2; iter++){
        answer.push_back(*iter);
    }
    answer.push_back(*iter);
    return answer;
}