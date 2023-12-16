#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    string a = "";
    int i = 0;
    for(auto x: strArr){
        for(auto y : x){
            if(i%2 == 0)
                a+=tolower(y);
            else
                a+=toupper(y);
        }
        answer.push_back(a);
        a="";
        i++;
    }
    return answer;
}