#include <string>
#include <vector>

using namespace std;

int solution(string before, string after) {
    int z = before.size();
    for(int i = 0; i < before.size(); i++)
    {
        for(int j = 0 ; j < before.size(); j++)
        {
            if(before[i] == after[j])
            {
                after[j] = '0';
                z--;
                j = after.size();
            }
        }
    }
    if(z == 0)
        return 1;
    return 0;
}