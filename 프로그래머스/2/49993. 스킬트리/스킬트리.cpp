#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    int j;
    for(int i = 0 ; i < skill_trees.size(); i++)
    {
        for(j = 0 ; j < skill.size()-1; j++)
        {
            if(skill_trees[i].find(skill[j]) > skill_trees[i].find(skill[j+1]))
                break;
        }
        if(j == skill.size()-1)
            answer++;
    }
    return answer;
}