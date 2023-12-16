#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string a;
    for(auto x : my_string){
        if(x != ' ')
            a+=x;
        else{
            answer.push_back(a);
            a= "";
        }
    }
    answer.push_back(a);
    return answer;
}