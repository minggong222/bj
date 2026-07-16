#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool cmd(string a, string b){
    return a.size() < b.size();
}

bool solution(vector<string> phone_book) {
    bool answer = true;
    sort(phone_book.begin(), phone_book.end());
    for(int i = 0; i < phone_book.size(); i++){
        for(int j = i + 1; j < phone_book.size(); j++){
            int k =0;
            int size = min(phone_book[i].size(), phone_book[j].size());
            for(; k < size; k++){
                if(phone_book[j][k] != phone_book[i][k]){
                    j = 10000000;
                    break;
                }
            }
            if(k == size)   return false;
        }
    }
    return answer;
}