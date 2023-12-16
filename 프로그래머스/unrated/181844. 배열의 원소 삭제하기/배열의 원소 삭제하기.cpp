#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> answer;
    for(auto x:arr){
        if(find(delete_list.begin(), delete_list.end(), x) == delete_list.end())
            answer.push_back(x);
    }
    return answer;
}