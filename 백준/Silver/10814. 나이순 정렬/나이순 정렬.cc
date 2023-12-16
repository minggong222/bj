#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
struct Person {
    int age;
    string name;
};
bool cmp(Person a, Person b) {
    return a.age < b.age;
}
int main() {
    int a;
    cin >> a;
    Person *v = new Person[100001];
    for (int i = 0; i < a; i++) {
        cin >> v[i].age >> v[i].name;
    }
    stable_sort(v, v + a, cmp);
    for (int i = 0; i < a; i++) {
        cout << v[i].age << ' ' << v[i].name << '\n';
    }
    return 0;
}