#include <iostream>
#define ll long long
using namespace std;
string A,B;
int answer = 0;
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    cin >>A>>B;
    if(A.size() > B.size()) swap(A,B);
    for(int i = A.size(); i <B.size(); i++)
        A = '0' + A;
    for(int i = 0; i < A.size(); i++){
        if(A[i] == B[i]){
            if(A[i] == '8')
                answer++;
            continue;
        }
        break;
    }
    cout << answer;
    return 0;
}