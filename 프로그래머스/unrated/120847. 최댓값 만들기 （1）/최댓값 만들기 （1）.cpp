#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int max = 0;
    int max2 = 0;
    int i = 0;
    for(auto x : numbers)
    {
        if(max <= x)
            max = x;
    }
    for(auto x : numbers)
    {
        if(max == x)
            i++;
    }

    if(i > 1)
    {
        return max*max;
    }else{
        for(auto x : numbers)
        {
            if(max2 <= x && max != x)
                max2 = x;
        }
    }
    return max*max2;
}