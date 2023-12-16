#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for(auto x : queries){
        int min = 1000000;
        for(int i = x[0]; i <= x[1]; i++){
            if(arr[i] > x[2])
                if(arr[i] < min)
                    min = arr[i];
        }
        if(min == 1000000)
            answer.push_back(-1);
        else
            answer.push_back(min);
    }
    return answer;
}