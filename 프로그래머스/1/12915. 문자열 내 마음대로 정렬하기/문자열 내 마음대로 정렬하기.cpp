#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int z = 0;
string cmp(vector<string> strings,int i, int j, int n)
{
    if(strings[i][n] < strings[j][n])
    {
        return strings[i];
    }else if(strings[i][n] == strings[j][n])
    {
        z++;
        return cmp(strings,i,j,z);
    }
    return " ";
}
vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    string temp;
    for(int i = 0; i < strings.size(); i++)
        for(int j = 0; j < strings.size(); j++)
        {
            z = -1;
            if(i != j)
            {
                if(cmp(strings, i, j, n)!= " ")
                {
                    z = -1;
                    temp = cmp(strings, i, j, n);
                    strings[i] = strings[j];
                    strings[j] = temp;
                }
            }
        }
    return strings;
}