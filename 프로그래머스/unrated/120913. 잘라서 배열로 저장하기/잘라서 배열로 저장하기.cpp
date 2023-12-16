#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    string answer2 = "";
    int i = 0;
    for(int x = 0; x<my_str.size();x++)
    {
        i++;
        answer2.push_back(my_str[x]);
        if(i == n)
        {
            i = 0;
            answer.push_back(answer2);
            answer2.clear();
        }else if(x == my_str.size()-1)
        {
            answer.push_back(answer2);
        }
    }
    return answer;
}