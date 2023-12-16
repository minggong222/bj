#include <string>
#include <vector>

using namespace std;
int asd(int a, int b){
    int i = 10;
    while(b/i != 0){
        i*=10;
    }
    return a*i+b;
}
int solution(int a, int b) {
    int answer = 0;
    int z = asd(a,b), x = asd(b,a);
    if(z > x)
        return z;
    else
        return x;
    return answer;
}