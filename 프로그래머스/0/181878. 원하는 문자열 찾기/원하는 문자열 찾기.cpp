#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    for(int i = 0; i < myString.size(); i++){
        myString[i] = tolower(myString[i]);
    }
    for(int i = 0; i < pat.size(); i++){
        pat[i] = tolower(pat[i]);
    }
    myString.find(pat) != string::npos ? answer = 1 : answer = 0;
    return answer;
}