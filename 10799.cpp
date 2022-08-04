#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    stack<char> s;
    string t;
    int tot = 0;

    cin >> t;
    for (int i = 0; i < t.length(); i++) {
        if (t[i] == '(') {
            s.push(t[i]);
        }
        else if (t[i] == ')' and t[i-1] == '(') {
            s.pop();
            tot += s.size();
        } 
        else {
            tot++;
            s.pop();
        }
    }
    cout << tot;
}