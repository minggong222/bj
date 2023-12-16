#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    for(i;i<j+1;i++)
    {
        int sw = 1;
        int z = i;
        while(sw)
        {
            
            if(z%10 == k)
                answer++;
            if(z < 10)
                sw = 0;
            z = z/10;
        }
    }
    return answer;
}