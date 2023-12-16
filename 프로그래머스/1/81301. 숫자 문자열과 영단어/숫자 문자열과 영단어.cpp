#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

int solution(string s) {
    int answer = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] > 47 && s[i] < 58)
        {
            answer = answer*10 + s[i] - 48;
        }else{
            switch(s[i])
            {
                case 'z':
                    answer = answer*10;
                    i = i+3;
                    break;
                case 'o':
                    answer = answer*10 + 1;
                    i = i+2;
                    break;
                case 't':
                    switch(s[i+1])
                    {
                        case 'w':
                            answer = answer*10 + 2;
                            i = i+2;
                            break;
                        case 'h':
                            answer = answer*10 + 3;
                            i = i+4;
                            break;
                    }break;
                case 'f':
                    switch(s[i+1])
                    {
                        case 'o':
                            answer = answer*10 + 4;
                            i = i+3;
                            break;
                        case 'i':
                            answer = answer*10 + 5;
                            i = i+3;
                            break;
                    }break;
                case 's':
                    switch(s[i+1])
                    {
                        case 'i':
                            answer = answer*10 + 6;
                            i = i+2;
                            break;
                        case 'e':
                            answer = answer*10 + 7;
                            i = i+4;
                            break;
                    }break;
                case 'e':
                    answer = answer*10 + 8;
                    i = i+4;
                    break;
                case 'n':
                    answer = answer*10 + 9;
                    i = i+3;
                    break;
            }
        }
    }
    return answer;
}