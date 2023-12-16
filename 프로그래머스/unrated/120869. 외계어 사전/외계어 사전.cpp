#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    for(int x = 0; x < dic.size(); x++)
    {
        int a = spell.size();
        for(auto y : spell)
        {
            for(int i = 0; i < dic[x].size(); i++)
            {
                if(dic[x][i] == y[0])
                {
                    a--;
                    i = dic[x].size();
                }
            }
        }
        if(a == 0)
            return 1;
    }
    return 2;
}