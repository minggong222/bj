#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    map<char , int> m;
    int t = ((today[2] - 48) * 10 + (today[3] - 48)) * 336 + ((today[5] - 48) * 10 + (today[6] - 48)) * 28 + (today[8] - 48) * 10 + (today[9] - 48);
    for (int i = 0; i < terms.size(); i++)
    {
        if(terms[i].size() == 3)
            m.insert({ terms[i][0], terms[i][2] - 48 });
        else if(terms[i].size() == 4)
            m.insert({ terms[i][0], (terms[i][2] - 48)*10 + terms[i][3] - 48});
        else
            m.insert({ terms[i][0], (terms[i][2] - 48)*100 + (terms[i][3] - 48)*10 + terms[i][4] - 48});
    }
    for (int i = 0; i < privacies.size(); i++)
    {
        int q = t - (((privacies[i][2] - 48) * 10 + (privacies[i][3] - 48)) * 336 +
            ((privacies[i][5] - 48) * 10 + (privacies[i][6] - 48)) * 28 + (privacies[i][8] - 48) * 10 + (privacies[i][9] - 48));
        if (q >= m[privacies[i][11]] * 28)
            answer.push_back(i + 1);
    }
    return answer;
}