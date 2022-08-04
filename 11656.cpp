#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    string tmp[1000];
    cin >> str;
    int l = str.length();
    for (int i = 0; i < l; i++) {
        tmp[i] = str.substr(i, l);
    }
    sort(tmp, tmp+l);
    for (int i = 0; i < l; i++) {
        cout << tmp[i] << endl;
    }
}