#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int cnt = 10;
    cin >> s;
    for (int i = 0; i < s.length()-1; i++) {
        if (s[i] == s[i+1]) cnt += 5;
        else cnt += 10;
    }
    cout << cnt << endl;
}