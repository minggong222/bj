#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string a = "";
    int idx = my_string.size();
    for(int i = 0; i < idx; i++){
        answer.push_back(my_string);
        my_string.erase(my_string.begin());
    }
    sort(answer.begin(), answer.end());
    return answer;
}