#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string answer = my_string;
    for(auto q : queries){
        reverse(answer.begin()+q[0], answer.begin()+q[1]+1);
    }
    return answer;
}