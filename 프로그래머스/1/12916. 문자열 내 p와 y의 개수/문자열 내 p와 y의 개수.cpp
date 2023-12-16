#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int a = 0;
    int b = 0;
    for(auto x: s)
    {
        if(x == 80 || x == 112)
            a++;
        if(x == 89 || x == 121)
            b++;
    }
    if( a == b)
        return true;
    else
        return false;
    cout << "Hello Cpp" << endl;
}