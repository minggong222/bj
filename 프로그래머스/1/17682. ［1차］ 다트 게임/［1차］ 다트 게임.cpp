#include <string>
#include <vector>
using namespace std;

int solution(string dartResult) {
    int answer = 0;
    vector<int> p(3);
    vector<char> d(3);
    vector<char> s(3);
    int idx = 0;
    for(int i = 0; i < 3; i++){
        if(!isdigit(dartResult[idx+1])){
            string s = "";
            s += dartResult[idx];
            p[i] = stoi(s);
        }else{
            string s = "";
            s += dartResult[idx];
            s += dartResult[++idx];
            p[i] = stoi(s);
        }
        d[i] = dartResult[++idx];
        idx++;
        if(idx < dartResult.size()){
            if(dartResult[idx] == '*' || dartResult[idx] == '#'){
                s[i] = dartResult[idx++];
            }else{
                s[i] = '-';
            }
        }
    }
    for(int i = 0; i < 3; i++){
        if(d[i] == 'D'){
            p[i] = p[i]*p[i];
        }else if(d[i] == 'T'){
            p[i] = p[i]*p[i]*p[i];
        }
        if(s[i] == '*'){
            p[i] *= 2;
            if(i-1 >= 0){
                p[i-1] *= 2;
            }
        }else if(s[i] == '#'){
            p[i] *= -1;
        }
    }
    answer = p[0]+p[1]+p[2];
    return answer;
}