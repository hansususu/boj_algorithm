#include <iostream>
#include <stack>
using namespace std;

int main() {
    string str;
    stack<char> s;

    cin >> str;

    for (int i = 0; i< str.size(); ++i) {
        if ('A' <= str[i] && str[i] <= 'Z') {
            cout << str[i];
        }
        else if (str[i] == '(') {
            s.push('(');
        }
        else if (str[i] == '*' || str[i] == '/') {
            if (str[i+1] != '(') {
                cout << str[i+1] << str[i];
                ++i;
            }
            else {
                s.push(str[i]);
            }
        }
        else if (str[i] == ')') {
            while (!s.empty()) {
                if (s.top() != '(') {
                    cout << s.top();
                    s.pop();
                }
                else {
                    s.pop();
                    while (!s.empty() && (s.top() =='*' || s.top() == '/')) {
                        cout << s.top();
                        s.pop();
                    }
                    break;
                }
            }
        }
        else {
            if (!s.empty() && (s.top() == '+' || s.top() == '-')) {
                while (!s.empty() && s.top() != '(') {
                    cout << s.top();
                    s.pop();
                }
                s.push(str[i]);
            }
            else s.push(str[i]);
        }
    }
    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }
}