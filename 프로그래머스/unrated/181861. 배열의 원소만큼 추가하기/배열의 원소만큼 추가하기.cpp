#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    for(auto x: arr){
        for(int i = 0 ; i < x ; i++)
            answer.push_back(x);
    }
    return answer;
}