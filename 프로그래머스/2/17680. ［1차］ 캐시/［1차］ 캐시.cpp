#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    vector<string> v;
    for(int i = 0; i < cities.size(); i++){
        string str = "";
        for(auto c : cities[i]) str += tolower(c);
        auto iter = find(v.begin(), v.end(), str);
        if(iter == v.end()){
            answer += 5;
            v.push_back(str);
        }else{
            answer += 1;
            v.erase(iter);
            v.push_back(str);
        }
        if(v.size() > cacheSize){
            v.erase(v.begin());
        }
    }
    return answer;
}