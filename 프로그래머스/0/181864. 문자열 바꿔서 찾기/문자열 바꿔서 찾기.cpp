#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    for(int i = 0; i < pat.size(); i++){
        pat[i] == 'A' ? pat[i] = 'B' : pat[i] = 'A';
    }
    
    return myString.find(pat) != string::npos;
}