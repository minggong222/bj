#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<string> a = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
vector<int> solution(string msg) {
    vector<int> answer;
    for(int i = 0; i < msg.size(); i++)
    {
        string x = "";
        x += msg[i];
        while(1)
        {
            if(find(a.begin(), a.end(), x) != a.end())
            {
                i++;
                x += msg[i];
            }else{
                a.push_back(x);
                x.pop_back();
                answer.push_back(find(a.begin(), a.end(), x)-a.begin() + 1);
                i--;
                break;
            }
        }
    }
    return answer;
}