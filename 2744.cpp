#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        char c = str[i];
        if ('a' <= c && c <= 'z') str[i] = str[i]-32;
        else str[i] = str[i] + 32;
    }
    cout << str <<'\n';
 }