#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    sort(people.begin(),people.end());
    int len;
    int j = people.size() - 1;
    int i =0;
    while(1)
    {
        if(people[0]*2 > limit)
        {
            return answer + people.size();
        }
        if(people.back()*2 <= limit)
        {
            if(people.size()%2 ==0)
                return answer + people.size()/2;
            else
                return answer + people.size()/2 +1;
        }
        if(people[i] + people[j] > limit)
        {
            answer++;
            j--;
        }else{
            answer++;
            i++;
            j--;
        }
        len = people.size();
        if(i > j)
        {
            break;
        }else if(i == j)
        {
            answer++;
            break;
        }
    }
    return answer;
}