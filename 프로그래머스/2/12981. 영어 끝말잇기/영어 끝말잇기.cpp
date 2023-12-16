#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    vector<string> s;
    s.push_back(words[0]);
    for(int i = 1; i < words.size(); i++)
    {
        if(words[i-1][words[i-1].size()-1] != words[i][0])
        {
            return {i%n + 1, i/n + 1};
        }else
        {
            for(auto x : s)
            {
                if(x == words[i])
                    return {i%n + 1, i/n + 1};
            }
        }
        s.push_back(words[i]);
    }
    return {0,0};
}