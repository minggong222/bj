#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<int> a(n);
    vector<vector<int>> answer(n, a);
    for(int i = 0; i < n; i++){
        answer[i][i] = 1;
    }
    return answer;
}