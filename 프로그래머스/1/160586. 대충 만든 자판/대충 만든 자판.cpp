#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    for(const auto &x : targets){
        int i = 0;
        for(const auto &y : x){
            vector<int> arr;
            for(const auto &z : keymap){
                int idx = z.find(y);
                if(idx != -1){
                    arr.push_back(++idx);
                }
            }
            sort(arr.begin(), arr.end());
            if(arr.size() != 0){
                i += arr[0];
            }else{
                i = -1;
                break;
            }
        }
        answer.push_back(i);
    }
    return answer;
}