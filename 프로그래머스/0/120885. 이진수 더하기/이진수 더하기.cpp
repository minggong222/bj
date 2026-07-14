#include <string>
#include <vector>

using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
    if(bin1.size() < bin2.size()) swap(bin1, bin2);
    while(bin1.size() != bin2.size()) bin2 = "0" + bin2;
    int idx = bin1.size()-1;
    bool carry = false;
    while(idx >= 0){
        int a = (bin1[idx] - '0') + (bin2[idx] - '0');
        if(carry) a++;
        switch(a){
            case 0:
                answer = "0" + answer;
                carry = false;
                break;
            case 1:
                answer = "1" + answer;
                carry = false;
                break;
            case 2:
                answer = "0" + answer;
                carry = true;
                break;
            case 3:
                answer = "1" + answer;
                carry = true;
                break;
        }
        idx--;
    }
    if(carry)   answer = "1" + answer;
    return answer;
}