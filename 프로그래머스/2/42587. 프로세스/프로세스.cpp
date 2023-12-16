#include <string>
#include <vector>
using namespace std;

int solution(vector<int> p, int location) {
    int answer = p.size();
    int i = 0;
    while(1)
    {
        for(int j = i+1; j < p.size(); j++)
        {
           if(p[i] < p[j])
           {
               p.push_back(p[i]);
               if(i == location)
                   location = p.size()-1;
               break;
           }
        }
        if(i == location)
        {
            return answer - (p.size() - i) +1;
        }
        i++;
    }
}