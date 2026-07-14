#include <string>
#include <vector>

using namespace std;

string solution(string a, string b) {
    string answer = "";
    if(a.size() < b.size()) swap(a,b);
    while(a.size() != b.size()) b = "0" + b;
    int aIdx = a.size()-1;
    int bIdx = b.size()-1;
    bool carry = false;
    while(aIdx >= 0 && bIdx >= 0){
        int x = a[aIdx] - '0';
        int y = b[bIdx] - '0';
        if(carry){
            answer = to_string((x + y + 1) % 10) + answer;
            carry = (x + y + 1) / 10;
        }else{
            answer = to_string((x + y) % 10) + answer;
            carry = (x + y) / 10;
        }
        aIdx--;
        bIdx--;
    }
    if(carry)   answer = "1" + answer;
    return answer;
}