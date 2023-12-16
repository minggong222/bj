#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(string dirs) {
    int answer = 0;
    int x = 5, y = 5;
    vector<string> a;
    for(int i = 0; i < dirs.size(); i++)
    {
        string s = "";
        switch(dirs[i])
        {
            case 'U':
                if(y == 10)
                    break;
                s.push_back(x + 48);
                s.push_back(y + 48);
                y++;
                s.push_back(x + 48);
                s.push_back(y + 48);
                break;
            case 'D':
                if(y == 0)
                    break;
                s.push_back(x + 48);
                s.push_back(y + 48 - 1);
                y--;
                s.push_back(x + 48);
                s.push_back(y + 48 + 1);
                break;
            case 'R':
                if(x == 10)
                    break;
                s.push_back(x + 48);
                s.push_back(y + 48);
                x++;
                s.push_back(x + 48);
                s.push_back(y + 48);
                break;
            case 'L':
                if(x == 0)
                    break;
                s.push_back(x + 48 - 1);
                s.push_back(y + 48);
                x--;
                s.push_back(x + 48 + 1);
                s.push_back(y + 48);
                break;
        }
        if(s != "")
            a.push_back(s);
    }
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());
    return a.size();
}