#include <iostream>
#include <stack>
#define ll long long
using namespace std;
stack<char> s;
string str;
int answer = 0;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> str;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == ')'){
            s.pop();
            answer+=s.size();
            i++;
            while(i < str.size()){
                if(str[i] == ')'){
                    s.pop();
                    answer++;
                    i++;
                }else{
                    i--;
                    break;
                }
            }
        }else{
            s.push('(');
        }
    }
    cout << answer;
    return 0;
}