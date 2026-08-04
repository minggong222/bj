#include <string>
#include <vector>
#include <map>
#include <cmath>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;
    map<int, int> m;
    for(auto s : records){
        int t = stoi(s.substr(0,2))*60 + stoi(s.substr(3,2));
        int car = stoi(s.substr(6,4));
        string IO = s.substr(11);
        if(IO == "IN"){
            if(m.find(car) == m.end())
                m[car] = -t;
            else
                m[car] -= t;
        }else{
            m[car] += t;
            
        }
    }
    for(auto iter = m.begin(); iter != m.end(); iter++){
        int t = iter->second;
        if(t <= 0){
            t += 23*60+59;
        }
        t -= fees[0];
        t = ceil((double)t/fees[2]);
        t = max(t,0);
        answer.push_back(fees[1] + t*fees[3]);
    }
    return answer;
}