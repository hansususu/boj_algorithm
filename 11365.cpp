#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    while (1) {
        getline(cin, s);
        if (s == "END") break;
        for (int i = 0; i < s.length(); i++) {
            cout << s[s.length() - i - 1];
        }
        cout << '\n';
    }
}