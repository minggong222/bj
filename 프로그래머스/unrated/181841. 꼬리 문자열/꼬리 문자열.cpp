#include <string>
#include <vector>

using namespace std;

string solution(vector<string> str_list, string ex) {
    string answer = "";
    for(auto x : str_list){
        if(x.find(ex) == string::npos)
            answer+=x;
    }
    return answer;
}