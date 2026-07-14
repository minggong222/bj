#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> v = {0};
    int idx = 1;
    int cnt = 1;
    while(v.size() < 101){
        bool sw = true;
        if(idx % 3 != 0){
            string str = to_string(idx);
            for(auto x : str){
                if(x == '3'){
                    sw = false;
                    break;
                }
            }
        }else   sw = false;
        if(sw){
            v.push_back(idx);
        }
        idx++;
    }
    return v[n];
}