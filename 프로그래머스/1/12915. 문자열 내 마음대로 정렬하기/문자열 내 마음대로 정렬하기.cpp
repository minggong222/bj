#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int i;
bool cmd(string a, string b){
    if(a[i] == b[i])
        return a < b;
    return a[i] < b[i];
}
vector<string> solution(vector<string> strings, int n) {
    vector<string> answer = strings;
    i = n;
    sort(answer.begin(), answer.end(), cmd);
    return answer;
}