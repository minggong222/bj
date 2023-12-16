#include <string>
#include <vector>
#include <cmath>

using namespace std;
long toBinary(int n, int a2)
{
    long a = 0;
    for(int i = a2-1; i >=0; i--)
    {
        a = a*10 + (n/pow(2,i));
        if(n >= pow(2,i))
            n = n - pow(2,i);
    }
    return a;
}
vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<long> t;
    vector<long> t2;
    vector<string> answer(n);
    for(int i = 0 ; i<n; i++)
    {
        t.push_back(toBinary(arr1[i], n));
        t2.push_back(toBinary(arr2[i], n));
    }
    for(int i =0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            long a = t[i]/pow(10,n-j-1), b = t2[i]/pow(10,n-j-1);
            if(a%10 == 1 || b%10 == 1)
            {
                answer[i].push_back('#');
            }else
            {
                answer[i].push_back(' ');
            }
        }
    }
    return answer;
}