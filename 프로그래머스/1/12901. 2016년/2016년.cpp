#include <string>
#include <vector>
#include <map>
using namespace std;

string solution(int a, int b) {
    string answer = "";
    vector<string> v = {"THU","FRI","SAT","SUN","MON","TUE","WED"};
    int day = 0;
    switch(a){
        case 12:
            day += 30;
        case 11:
            day += 31;
        case 10:
            day += 30;
        case 9:
            day += 31;
        case 8:
            day += 31;
        case 7:
            day += 30;
        case 6:
            day += 31;
        case 5:
            day += 30;
        case 4:
            day += 31;
        case 3:
            day += 29;
        case 2:
            day += 31;
        case 1:
    }
    day += b;
    
    return v[day%7];
}