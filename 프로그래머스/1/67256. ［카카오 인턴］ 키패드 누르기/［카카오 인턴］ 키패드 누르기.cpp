#include <string>
#include <vector>
#include <cstdlib>

using namespace std;
char Asd(int r, int l, int n, int x, int y, string h)
{
    if(abs(r - n) + x > abs(l - n) + y)
    {
        return 'L';
    }else if(abs(r - n) + x < abs(l - n) + y)
    {
        return 'R';
    }else{
        if(h == "right")
            return 'R';
        else
            return 'L';
    }
}
string solution(vector<int> numbers, string hand) {
    string answer = "";
    int r = 10;
    int l = 10;
    for(int i = 0; i < numbers.size(); i++)
    {
        int x = numbers[i];
        if(x == 1 || x == 4 || x == 7)
        {
            answer.push_back('L');
            l = x;
        }else if(x == 3 || x == 6 || x == 9)
        {
            answer.push_back('R');
            r = x - 2;
        }else
        {
            if(r%3 != 2 && l%3 != 2)
            {
                if(x == 0)
                {
                    answer.push_back(Asd(r/3,l/3,3,1,1,hand));
                    if(answer[i] == 'R')
                        r = 11;
                    else
                        l = 11;
                }else{
                    answer.push_back(Asd(r/3,l/3,x/3,1,1,hand));
                    if(answer[i] == 'R')
                        r = x;
                    else
                        l = x;
                }
            }else if(r%3 == 2 && l%3 == 2)
            {
                if(x == 0)
                {
                    answer.push_back(Asd(r/3,l/3,3,0,0,hand));
                    if(answer[i] == 'R')
                        r = 11;
                    else
                        l = 11;
                }else{
                    answer.push_back(Asd(r/3,l/3,x/3,0,0,hand));
                    if(answer[i] == 'R')
                        r = x;
                    else
                        l = x;
                }
            }else if(r%3 == 2)
            {
                if(x == 0)
                {
                    answer.push_back(Asd(r/3,l/3,3,0,1,hand));
                    if(answer[i] == 'R')
                        r = 11;
                    else
                        l = 11;
                }else{
                    answer.push_back(Asd(r/3,l/3,x/3,0,1,hand));
                    if(answer[i] == 'R')
                        r = x;
                    else
                        l = x;
                }
            }else
            {
                if(x == 0)
                {
                    answer.push_back(Asd(r/3,l/3,3,1,0,hand));
                    if(answer[i] == 'R')
                        r = 11;
                    else
                        l = 11;
                }else{
                    answer.push_back(Asd(r/3,l/3,x/3,1,0,hand));
                    if(answer[i] == 'R')
                        r = x;
                    else
                        l = x;
                }
            }
        }
    }
    return answer;
}