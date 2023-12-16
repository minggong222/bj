#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<string> v;
void asd(string s, int i){
    if(i < 5){
        asd(s + "A", i+1);
        asd(s + "E", i+1);
        asd(s + "I", i+1);
        asd(s + "O", i+1);
        asd(s + "U", i+1);
        v.push_back(s + "A");
        v.push_back(s + "E");
        v.push_back(s + "I");
        v.push_back(s + "O");
        v.push_back(s + "U");
    }
    return;
}
int solution(string word) {
    int answer = 1;
    asd("", 0);
    sort(v.begin(), v.end());
    answer += find(v.begin(), v.end(), word) - v.begin();
    return answer;
}