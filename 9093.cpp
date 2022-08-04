#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    while (n--) {
        string arr;
        getline(cin, arr);
        arr += ' ';
        stack<char> s;
        for (char ch: arr) {
            if (ch == ' ') {
                while (!s.empty()) {
                    cout << s.top();
                    s.pop();
                }
                cout << ch;
            }
            else s.push(ch);
        }
    }
}