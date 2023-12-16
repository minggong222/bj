#include <string>
#include <vector>

using namespace std;
string Binary(int a)
{ 
    string s = "";
    if(a/2 == 0)
    {
        s = a%2 + 48;
        return s;
    }
    else
    {
        s = Binary(a/2);
        s.push_back(a%2 + 48);
        return s;
    }
}
vector<int> solution(string s) {
    vector<int> answer(2,0);
    answer[0] = 1;
    while(1)
    {
        int a = 0;
        for(int i = s.size()-1; i >= 0; i--)
        {
            if(s[i] == '0')
            {
                s.erase(s.begin()+i);
                a++;
            }
        }
        answer[1] += a;
        if(s != "1")
        {
            s = Binary(s.size());
            answer[0]++;
        }
        else
            break;
    }
    return answer;
}