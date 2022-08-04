#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string str;
    cin >> str;
    vector<char> v;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '-') v.push_back(str[i+1]);
    }

    cout << str[0];
    for (int i = 0; i < v.size(); i++) cout << v[i];
}  