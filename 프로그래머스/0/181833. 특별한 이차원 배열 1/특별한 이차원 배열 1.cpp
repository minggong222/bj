#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    for(int i = 0; i < n; i++){
        vector<int> v(n);
        v[i] = 1;
        answer.push_back(v);
    }
    return answer;
}