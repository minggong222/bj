#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";
    vector<bool> a(my_string.size(), true);
    for(int i = 0; i < indices.size(); i++){
        a[indices[i]] = false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i])
            answer.push_back(my_string[i]);
    }
    return answer;
}