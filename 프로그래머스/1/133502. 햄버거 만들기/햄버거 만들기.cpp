#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    bool sw = true;
    int idx;
    int j = 0;
    while(sw)
    {
        int i;
        idx  = ingredient.size();
        for(i = j; i < idx; i++)
        {
            if(i + 3 < idx && ingredient[i] == 1 && ingredient[i+1] == 2 && ingredient[i+2] == 3                                && ingredient[i + 3] == 1)
            {
                ingredient.erase(ingredient.begin() + i,ingredient.begin() + i + 4);
                answer++;
                if(i - 4 >= 0)
                    j = i-4;
                else if(i -3 >= 0)
                    j = i-3;
                else if(i - 2 >= 0)
                    j = i-2;
                else if(i - 1 >= 0)
                    j = i-1;
                break;
            }
        }
        if(i >= idx)
            return answer;
    }
    return answer;
}