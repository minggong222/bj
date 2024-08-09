#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <set>
#define ll long long
using namespace std;
int n;
vector<int> prime;
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> n;
	bool *isPrime = new bool[n + 1];

	for (int i = 0; i <= n; i++)
	{
		isPrime[i] = true;
	}

	for (int i = 2; i <= n; i++)
	{
		if (isPrime[i])
		{
			prime.push_back(i);
			for (int j = i * 2; j <= n; j += i)
			{
				isPrime[j] = false;
			}
		}
	}
	for (int i = 0; i < prime.size(); i++)
	{
		set<int> s;
		s.insert(prime[i]);
		int num = prime[i];
		while (true)
		{
			int x = num;
			num = 0;
			while (x != 0)
			{
				num += (x % 10) * (x % 10);
				x /= 10;
			}
			if (num == 1)
			{
				cout << prime[i] << '\n';
				break;
			}
			if (s.find(num) == s.end())
			{
				s.insert(num);
				continue;
			}
			break;
		}
	}
	return 0;
}