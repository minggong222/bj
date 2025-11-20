#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main() {
    char a;
    cin >> a;
	switch (a)
	{
	case 'M':
		cout << "MatKor";
		break;
	case 'W':
		cout << "WiCys";
		break;
	case 'C':
		cout << "CyKor";
		break;
	case 'A':
		cout << "AlKor";
		break;
	case '$':
		cout << "$clear";
		break;
	}
    return 0;
}