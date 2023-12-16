#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    string a = "";
    for(auto x: babbling)
    {
        a = "";
        for(int i = 0; i < x.size(); i++)
        {
            switch(x[i]){
                case 'a':
                    if(i + 2 < x.size() && x[i + 1] == 'y' && x[i + 2] == 'a' && a != "aya")
                    {
                        a = "aya";
                        i = i + 2;
                    }
                    else
                        i = x.size();
                    break;
                case 'y':
                    if(i + 1 < x.size() && x[i + 1] == 'e' && a != "ye")
                    {
                        a = "ye";
                        i = i + 1;
                    }
                    else
                        i = x.size();
                    break;
                case 'w':
                    if(i + 2 < x.size() && x[i + 1] == 'o' && x[i + 2] == 'o' && a != "woo")
                    {
                        a = "woo";
                        i = i + 2;
                    }
                    else
                        i = x.size();
                    break;
                case 'm':
                    if(i + 1 < x.size() && x[i + 1] == 'a' && a != "ma")
                    {
                        a = "ma";
                        i = i + 1;
                    }
                    else
                        i = x.size();
                    break;
                default:
                    i = x.size();
                    break;
            }
            if(i == x.size()-1)
                    answer++;
        }
    }
    return answer;
}