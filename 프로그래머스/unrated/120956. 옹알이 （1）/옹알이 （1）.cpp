#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    for(auto x : babbling)
    {
        for(int i = 0; i < x.size(); i++)
        {
            if(x[i] == 'a')
            {
                if(i+2 < x.size())
                {
                    if(x[i+1] == 'y')
                    {
                        if(x[i+2] == 'a')
                        {
                            i += 2;
                            if(i+1 == x.size())
                                answer++;
                        }
                        else
                            i = x.size();
                    }else
                        i = x.size();
                }else
                    i = x.size();
            }else if(x[i] == 'y')
            {
                if(i+1 < x.size())
                {
                    if(x[i+1] == 'e')
                    {
                        i += 1;
                        if(i+1 == x.size())
                            answer++;
                    }else
                        i = x.size();
                }else
                    i = x.size();   
            }else if(x[i] == 'w')
            {
                if(i+2 < x.size())
                {
                    if(x[i+1] == 'o')
                    {
                        if(x[i+2] == 'o')
                        {
                            i += 2;
                            if(i+1 == x.size())
                                answer++;
                        }
                        else
                            i = x.size();
                    }else
                        i = x.size();
                }else
                    i = x.size();
            }else if(x[i] == 'm')
            {
                if(i+1 < x.size())
                {
                    if(x[i+1] == 'a')
                    {
                        i += 1;
                        if(i+1 == x.size())
                            answer++;
                    }else
                        i = x.size();
                }else
                    i = x.size();
            }else
                i = x.size();
        }
    }
    return answer;
}