#include <iostream>
#include <string>

using namespace std;

int main() {
	string input = "";
	cin >> input;
	int idx = input.size(), answer = 0;
	for (int i = 0; i < idx; i++) {
		if (i + 1 < idx) {
			switch (input[i]) {
			case 'c':
				if (input[i + 1] == '=' || input[i + 1] == '-')	i++;
				break;
			case 'd':
				if (input[i + 1] == '-')	i++;
				else if (input[i + 1] == 'z' && i + 2 < idx && input[i + 2] == '=') i += 2;
				break;
			case 'l':
				if (input[i + 1] == 'j')	i++;
				break;
			case 'n':
				if (input[i + 1] == 'j')	i++;
				break;
			case 's':
				if (input[i + 1] == '=')	i++;
				break;
			case 'z':
				if (input[i + 1] == '=')	i++;
				break;
			}
		}
		answer++;
	}
	cout << answer;
	return 0;
}