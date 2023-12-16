#include <string>
#include <vector>
#include <algorithm>

using namespace std;
long long solution(long long n) {
    long long answer = 0;
    vector<int> a;
    while(1)
    {
        a.push_back(n%10);
        if(n < 10)
            break;
        n = n / 10;
    }
    sort(a.begin(),a.end());
    for(int i = a.size()-1;i>=0;i--)
    {
        answer = answer*10 + a[i];
    }
    return answer;
}