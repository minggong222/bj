#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    string a = "";
    for(auto x: pat){
        if(x == 'A')
            a += 'B';
        else
            a += 'A';
    }
    if(myString.find(a) != string::npos)
        return 1;
    return answer;
}