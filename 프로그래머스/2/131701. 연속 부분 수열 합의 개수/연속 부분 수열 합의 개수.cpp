#include <string>
#include <vector>
#include <queue>
#include <set>
using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    queue<int> q;
    set<int> s;
    for(auto x : elements){
        q.push(x);
    }
    for(int i = 0; i < elements.size(); i++){
        int sum = 0;
        for(int j = 0; j < elements.size(); j++){
            sum += q.front();
            q.push(q.front());
            q.pop();
            s.insert(sum);
        }
        q.push(q.front());
        q.pop();
    }
    return s.size();
}