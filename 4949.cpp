#include <iostream>
#include <string.h>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    while (1) {
        string str;
        getline(cin, str);
        if (str.size() == 1 && str[0] == '.') break;
        bool check_line = false;
        stack<char> check;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '(' || str[i] == '[') check.push(str[i]);
            else if (str[i] == ')') {
                if (check.size() > 0 && check.top() == '(') check.pop();
                else {
                    check_line = true;
                    break;
                }
            }
            else if (str[i] == ']') {
                if (check.size() > 0 && check.top() == '[') check.pop();
                else {
                    check_line = true;
                    break;
                }
            }
        }
        if (check.empty() && !check_line) cout << "yes\n";
        else cout << "no\n";
    }
}