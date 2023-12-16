#include <string>
#include <vector>

using namespace std;

string solution(string letter) {
    string answer = "";
    vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    string morse2 = "";
    for(auto x: letter)
    {
        if(x == ' ')
        {
            int sw = 1;
            int i = 0;
            while(sw)
            {
                if(morse2 == morse[i])
                    sw = 0;
                i++;
            }
            answer.push_back(i+96);
            morse2 = "";
        }else{
            morse2.push_back(x);
        }
    }
    int i =0;
    while(true)
            {
                if(morse2 == morse[i])
                {
                     answer.push_back(i+97);
                    return answer;
                }
                i++;
            }
}