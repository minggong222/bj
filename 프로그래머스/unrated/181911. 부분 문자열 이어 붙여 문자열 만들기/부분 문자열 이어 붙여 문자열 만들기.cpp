#include <string>
#include <vector>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) {
    string answer = "";
    for(int j = 0; j < parts.size(); j++){
        for(int i = parts[j][0]; i <= parts[j][1]; i++)
            answer+=my_strings[j][i];
    }
    return answer;
}