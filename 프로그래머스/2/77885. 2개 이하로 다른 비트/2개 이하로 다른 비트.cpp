#include <string>
#include <vector>
#include <bitset>
using namespace std;

vector<long long> solution(vector<long long> numbers) {
    vector<long long> answer;
    for(auto x : numbers){
        if(x%2 == 0)    answer.push_back(x+1);
        else{
            string str = bitset<64>(x).to_string();
            for(int i = str.size()-1; i >= 0; i--){
                if(str[i] == '0'){
                    swap(str[i], str[i+1]);
                    break;
                }
            }
            answer.push_back(stoll(str,nullptr,2));
        }
    }
    return answer;
}