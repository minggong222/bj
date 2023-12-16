#include <string>
#include <vector>
#include <cmath>
using namespace std;
bool isPrime(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n%i == 0) {
			return false;
		}
	}
	return true;
}
int solution(int n) {
    int answer = 0;
    vector<int> a(n+1);
    for(int i = 2; i <= n; i++)
    {
        if(a[i] != -1)
        {
            if(isPrime(i))
            {
                int j = 2;
                a[i] = i;
                answer++;
                while(i*j <= n)
                {
                    a[i*j] = -1;
                    j++;
                }
            }
        }
    }
    return answer;
}