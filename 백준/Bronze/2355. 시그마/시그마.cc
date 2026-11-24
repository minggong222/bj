#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <algorithm>
#include <numeric>
#include <cmath>


int main()
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);
	std::string inputStr;
	std::getline(std::cin, inputStr);
	std::stringstream ss(inputStr);

	long long a;
	long long b;

	ss >> a;
	ss >> b;


	const int tempVal = std::max(a, b);
	if (tempVal == a)
	{
		a = b;
		b = tempVal;
	}

	std::cout << (b - a + 1) * (b + a) / 2;

}