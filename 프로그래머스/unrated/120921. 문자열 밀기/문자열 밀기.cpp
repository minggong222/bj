#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    int answer = 0;
    int j = 0;
    while(true)
    {
        for(int i = 0; i < A.size(); i++)
        {
            if(i + j < A.size())
            {
                if(A[i] == B[i+j])
                {
                   if(i == B.size()-1)
                        return j;
                }else{
                    i = B.size();
                }
            }else{
                if(A[i] == B[i+j - A.size()])
                {
                    if(i == B.size()-1)
                        return j;
                }else{
                    i = B.size();
                }
            }
        }
        j++;
        if(j == B.size())
            return -1;
    }
    return answer;
}