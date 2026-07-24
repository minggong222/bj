#include <string>
#include <map>
using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    map<string, int> m1, m2;
    string str = "";
    for (int i = 1; i < str1.size(); i++) {
        str += tolower(str1[i - 1]);
        str += tolower(str1[i]);
        if (isalpha(str[0]) && isalpha(str[1]))
            m1[str]++;
        str.clear();
    }
    for (int i = 1; i < str2.size(); i++) {
        str += tolower(str2[i - 1]);
        str += tolower(str2[i]);
        if (isalpha(str[0]) && isalpha(str[1]))
            m2[str]++;
        str.clear();
    }
    map<string, int> m3, m4;
    for (auto i = m1.begin(); i != m1.end(); i++) {
        m3[i->first] = min(i->second, m2[i->first]);
        m4[i->first] = max(i->second, m2[i->first]);
    }
    for (auto i = m2.begin(); i != m2.end(); i++) {
        m3[i->first] = min(i->second, m1[i->first]);
        m4[i->first] = max(i->second, m1[i->first]);
    }
    int a = 0, b = 0;
    for (auto i = m3.begin(); i != m3.end(); i++) {
        a += i->second;
    }
    for (auto i = m4.begin(); i != m4.end(); i++) {
        b += i->second;
    }
    if (b == 0)  return 65536;
    return (a * 65536) / b;
}