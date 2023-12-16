#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int j = 0;
    for(int i = 0 ; i < str1.size(); i++)
    {
        if(str1[i] == str2[0])
        {
            for(auto x : str2)
            {
                if(x == str1[i])
                {
                    j++;
                    i++;
                }else{
                    i = i -j;
                    j = 0;
                }
            }
            if(j == str2.size())
                return 1;
        }
    }
    return 2;
}