#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    switch(a){
        case 1:
            break;
        case 2:
            b = b + 31;
            break;
        case 3:
            b = b + 60;
            break;
        case 4:
            b = b + 91;
            break;
        case 5:
            b = b + 121;
            break;
        case 6:
            b = b + 152;
            break;
        case 7:
            b = b + 182;
            break;
        case 8:
            b = b + 213;
            break;
        case 9:
            b = b + 244;
            break;
        case 10:
            b = b + 274;
            break;
        case 11:
            b = b + 305;
            break;
        case 12:
            b = b + 335;
            break;
    }
    switch(b%7)
    {
        case 1:
            return "FRI";
        case 2:
            return "SAT";
        case 3:
            return "SUN";
        case 4:
            return "MON";
        case 5:
            return "TUE";
        case 6:
            return "WED";
        case 0:
            return "THU";
    }
    return answer;
}