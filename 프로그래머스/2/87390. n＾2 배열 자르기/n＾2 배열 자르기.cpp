#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> a;
    long long x;
    long long y;
    for(long long i = left; i <= right; i++)
    {
        x = i/n + 1;
        y = i%n + 1;
        if(x > y)
            a.push_back(x);
        else
        {
            a.push_back(y);
        }
    }
    return a;
}