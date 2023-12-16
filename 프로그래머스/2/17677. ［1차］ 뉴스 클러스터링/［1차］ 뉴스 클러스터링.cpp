#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<string> asd(string str){
    vector<string> x;
    for(int i = 1; i < str.size(); i++){
        if(isalpha(str[i-1]) && isalpha(str[i])){
            string a = "";
            a += tolower(str[i-1]);
            a += tolower(str[i]);
            x.push_back(a);
        }
    }
    return x;
}
int solution(string str1, string str2) {
    int answer = 0;
    vector<string> x = asd(str1);
    vector<string> y = asd(str2);
    int a = 0, b = 0;
    b = x.size() + y.size();
    if(x.size() == 0 && y.size() == 0)
        return 65536;
    for(int i = 0; i < x.size(); i++){
        if(find(y.begin(), y.end(), x[i]) != y.end()){
            a++;
            y.erase(find(y.begin(), y.end(), x[i]));
        }
    }
    b -= a;
    answer = (a*65536)/b;
    return answer;
}