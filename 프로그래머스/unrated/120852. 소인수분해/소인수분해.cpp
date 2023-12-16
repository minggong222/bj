#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    for(int i = 2; i <= n; i++)
    {
        int j = 2;
        if(n%i == 0)
        {
            while(true)
            {
                if(i  == j)
                {
                    answer.push_back(i);
                    break;
                }
                if(i%j == 0)
                {
                    break;
                }
                j++;
            }
        }
    }
    return answer;
}