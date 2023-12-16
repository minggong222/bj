#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string answer = my_string;
    for(auto x : queries){
        for(int i = 0; i < (x[1] - x[0])/2+1; i++){
            swap(answer[x[0] + i], answer[x[1] - i]);
        }
    }
    return answer;
}