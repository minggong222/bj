#include <string>
#include <vector>
#include <cstring>

using namespace std;

int solution(int cacheSize, vector<string> cities) {
    int answer = 5;
    vector<string> cache;
    cache.push_back(cities[0]);
    for(int i = 1; i < cities.size(); i++)
    {
        for(int j = 0; j < cache.size(); j++)
        {
            if(strcasecmp(cache[j].c_str(), cities[i].c_str()) == 0)
            {
                if(cacheSize == 0)
                {
                    answer += 5;
                    break;
                }
                cache.erase(cache.begin() + j);
                cache.push_back(cities[i]);
                answer++;
                break;
            }else if(j == cache.size()-1){
                if(cache.size() >= cacheSize)
                {
                    cache.erase(cache.begin());
                    cache.push_back(cities[i]);
                    answer += 5;
                    break;
                }else{
                    cache.push_back(cities[i]);
                    answer += 5;
                    break;
                }
            }
        }
    }
    return answer;
}