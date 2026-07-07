#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer(num_list.size()/n, vector<int>(n));
    for(int i = 0; i < num_list.size(); i++){
        answer[i/n][i%n] = num_list[i];
    }
    return answer;
}