#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int m = 1000;

void asd(int x, int n, int a, int i){
    if(a < x){
        return;
    }else if(a == x){
        if(m > i)   m = i;
        return;
    }else{
        if(m >= i){
            if(a%3 == 0)    asd(x, n, a / 3, i+1);
            if(a%2 == 0)    asd(x, n, a / 2, i+1);
            if((a-x)%n == 0 || (a-n)%2 == 0 || (a-n)%3 == 0)    
                asd(x, n, a - n, i+1);
        }
        return;
    }
    return;
}
int solution(int x, int y, int n) {
    int answer = 0;
    if(x == y)  return 0;
    if(y%3 == 0)    asd(x, n, y / 3, 1);
    if(y%2 == 0)    asd(x, n, y / 2, 1);
    if((y-x)%n == 0)    asd(x, n, y - n, 1);
    if(m == 1000)
        return -1;
    return m;
}