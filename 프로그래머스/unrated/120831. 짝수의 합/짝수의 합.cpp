#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int i = n/2;
    int sum = 0;
    for(int j = 0 ; j<i; j++)
    {
        sum += 2*(j+1);
    }
    return sum;
}