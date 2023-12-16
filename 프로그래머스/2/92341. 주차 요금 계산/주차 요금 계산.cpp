#include <string>
#include <vector>
#include <map>
#include <sstream>
using namespace std;

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;
    map<string, int> m;
    map<string, int>::iterator i;
    for(auto x : records){
        x[2] = ' ';
        vector<string> a;
        string s = "";
        stringstream ss;
        ss.str(x);
        while(ss >> s){
            a.push_back(s);
        }
        if(a[3] == "IN")
            m[a[2]] -= stoi(a[0])*60 + stoi(a[1]);
        else
            m[a[2]] += stoi(a[0])*60 + stoi(a[1]);
    }
    for(i = m.begin(); i != m.end(); i++){
        if(i->second <= 0)
            i->second = i->second + (23*60 + 59);
    }
    for(i = m.begin(); i != m.end(); i++){
        if(i->second <= fees[0])
            answer.push_back(fees[1]);
        else{
            int z = (i->second - fees[0])/fees[2];
            if((i->second - fees[0])%fees[2] == 0)
                answer.push_back(fees[1] + (z * fees[3]));
            else
                answer.push_back(fees[1] + ((z+1) * fees[3]));
        }
    }
    return answer;
}