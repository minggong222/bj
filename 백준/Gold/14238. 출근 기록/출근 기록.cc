#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int Anum;
int Bnum;
int Cnum;
char arr[50];
int cache[50][50][50][50][4][4];
bool solve(int begin, int a, int b, int c, char before, char bbefore)
{
	if (a == 0 && b == 0 && c == 0)
	{
		return true;
	}
	if (cache[begin][a][b][c][(before - 32) % 4][(bbefore - 32) % 4]) return false;
	cache[begin][a][b][c][(before - 32) % 4][(bbefore - 32) % 4] = true;
	if (a > 0) {
		arr[begin] = 'A';
		if (solve(begin + 1, a - 1, b, c, 'A', before)) return true;
	}

	if (b > 0 && before != 'B') {
		arr[begin] = 'B';
		if (solve(begin + 1, a, b - 1, c, 'B', before)) return true;
	}
	if (c > 0 && before != 'C' && bbefore != 'C') {
		arr[begin] = 'C';
		if (solve(begin + 1, a, b, c - 1, 'C', before)) return true;
	}
	return false;
}
int main()
{
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); ++i)
	{
		if (s[i] == 'A')
			Anum++;
		else if (s[i] == 'B')
			Bnum++;
		else if (s[i] == 'C')
			Cnum++;
	}
	if (solve(0, Anum, Bnum, Cnum, ' ', ' '))
	{
		for (int i = 0; i < s.size(); ++i)
			cout << arr[i];
	}
	else
		cout << -1 << "\n";

	return 0;
}