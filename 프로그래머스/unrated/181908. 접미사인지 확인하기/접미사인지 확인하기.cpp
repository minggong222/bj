#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 1;
    int idx = my_string.size()-1;
    int idx2 = is_suffix.size()-1;
    if(my_string.size() < is_suffix.size())
        return 0;
    for(int i = 0; i < is_suffix.size(); i++){
        if(my_string[idx-i] != is_suffix[idx2-i])
            return 0;
    }
    return answer;
}