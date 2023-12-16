#include <string>
#include <vector>

using namespace std;

unsigned int solution(int n) {
    if(n == 1)
        return 1;
    if(n == 2)
        return 2;
    unsigned int a = 1;
    unsigned int b = 2;
    unsigned int c = 0;
    for(int i = 0; i < n - 2; ++i)
    {
        c = (a + b) % 1000000007;
        a = b;
        b = c;
    }
    return c;
}