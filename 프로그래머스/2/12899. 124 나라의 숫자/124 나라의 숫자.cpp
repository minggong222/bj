#include <string>
#include <vector>
#include <cmath>
using namespace std;

string solution(int n) {
    string answer = "";
    while(n > 0){
        int i = n%3;
        switch(i){
            case 1:
                answer = '1' + answer;
                n = (n-1)/3;
                break;
            case 2:
                answer = '2' + answer;
                n = (n-2)/3;
                break;
            case 0:
                answer = '4' + answer;
                n = (n-3)/3;
                break;
        }
    }
    return answer;
}