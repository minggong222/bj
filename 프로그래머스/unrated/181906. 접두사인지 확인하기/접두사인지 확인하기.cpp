#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = 0;
    if(my_string.size() < is_prefix.size())
        return answer;
    for(int i = 0; i<is_prefix.size(); i++){
        if(my_string[i] != is_prefix[i])
            return answer;
    }
    return 1;
}